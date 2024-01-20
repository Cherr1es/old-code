#include <iostream>
#include <iomanip>
using namespace std ;

const int Max = 9 ;
int Arr [ Max ] ;
void Num ( int n ) //输入要排序的一串整数
{
    for ( int i = 0 ; i < n ; i ++ )
    {
        Arr [ i ] = i + 1 ;
    }
}

void exchange( int arr [ ] , int a , int b ) //换位
{
    int tmp = arr [ a ] ;
    arr [ a ]  = arr [ b ] ;
    arr [ b ] = tmp ;
}

void permute ( int arr [] , int left , int right )//输入起始的位数与终止的位数
{
    if ( left == right ) //当起始值与终止值相同时输出修改后的数组
    {
        for ( int i = 0 ; i <= right ; i ++ )
        {
            cout << setw ( 5 ) << arr [ i ] ;
        }
        cout << endl ;
    }
    else
    {
        for ( int i = left ; i <= right ; ++ i ) // 直至left迭代到与right相等
        {
            exchange( arr , left , i ) ;
            permute ( arr , left + 1 , right ) ; //Arr[left]后面每一个元素都互相交换一次
            exchange( arr , left , i ) ;
        }
    }
}

int main ( )
{
    int t ;
    cin >> t ;
    Num ( t ) ;
    permute ( Arr , 0 , t - 1 ) ;
    return 0 ;
}