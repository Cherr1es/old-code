#include <iostream>
#include <algorithm>

using namespace std;

typedef struct _Node
{
    int number ;
    int data ;
}Node ;

bool compare ( Node& a , Node& b )
{
    return a.data < b.data ;
}

void print ( Node* node , int n )
{
    for ( int i = 0 ; i < n ; ++ i)
    {
        cin >> node [ i ] . data ;
        node [ i ]. number = i + 1 ;
    }
}

int BinarySearch ( Node* node , int n , int m )
{
    int i = 0 ;
    int t = 0 ;
    int x = n - 1 ;

    while ( i <= x )
    {
        int tmp = i + ( x - i) / 2 ;
        if ( node [ tmp ] .data >= m )
        {
            t = node [ tmp ] .number ;
            x = tmp - 1 ;
        }
        else
        {
            i = tmp + 1 ;
        }
    }

    return t ;
}

void Output ( int t )
{
    if ( t != 0 )
    {
        cout << t <<endl ;
    }
    else
    {
        cout << 0 << endl ;
    }
}
int main ( void )
{
    int a , b ;
    cin >>a ; //输入第一行数字（位置数）

    Node* node = new Node [ a ] ; //分配a个Node数组，地址赋给node
    print ( node , a ) ; //输入第二行数字（每个位置的瓶子个数）
    sort ( node , node + a , compare ) ;

    cin >> b ;//输入第三行数字（发球次数）

    for ( int i = 0 ; i < b ; i ++ )
    {
        int m ; //数字第四行及其下一行行的数字 （要打倒的瓶子个数）
        cin >> m ;
        int t = BinarySearch ( node , a , m ) ;
        Output ( t ) ;
    }

    delete[] node;
    return 0 ;
}