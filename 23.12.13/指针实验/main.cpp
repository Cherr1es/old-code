#include <iostream>
using namespace std;

//通过指针比大小
/*int main ( void )
{
    int a,b ;
    cin >> a ;
    cin >> b ;
    int* p = &a ;
    int* t = &b ;
    int max = ( *p > *t ) ? a : b ;
    cout << max ;
    return 0 ;
}*/

//通过指针输出数组数据
#define N 10
int Arr [ N ] ;
int main ( void )
{
    int* p ;
    for ( int i = 0 ; i < N ; i ++)
    {
        cin >> Arr [ i ] ;
    }
    for ( int i = 0 ; i < N ; i++ )
    {
        cout << Arr [ i ] << " " ;
    }
    return 0 ;
}

//
