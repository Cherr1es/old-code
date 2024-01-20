#include <iostream>
using namespace std ;
const int N = 110 ; //Y
const int M = 110 ; //X


int n , m ; //输入行数和列数 （ y , x )
char map [ N ] [ M ] ; //地图
char tra [ N ] [ M ] ; //路径
bool judge = false ; //判断值

int X [ 4 ] = {-1 , 0 , 1 , 0 } ;
int Y [ 4 ] = {0 , -1 , 0 , 1 } ;

void DFS ( int y , int x )
{
    if ( judge || y < 1 || x < 1 || y > N || x > M || map [ y ] [ x ] == 1 || tra [ y ] [ x ] == 1 )
    {
        return ;
    }

    tra [ y ] [ x ] = 1 ;

    if ( y == n && x == m )
    {
        judge = true ;
        return ;
    }

    for ( int i = 0 ; i < 4 ; ++ i )
    {
        DFS (y + Y [ i ] , x + X [ i ] ) ;
    }
}

int main ( void )
{
    cin >> n >> m ;
    for ( int i = 1 ; i <= n ; ++ i )
    {
        for ( int p = 1 ; p <= m ; ++ p )
        {
            char a ;
            cin >> a ;
            if ( a == '#' )
            {
                map [ i ] [ p ] = 1 ;
            }
        }
    }
    DFS( 1 , 1) ;
    cout << ( judge ? "Yes" : "No" ) ;
    return 0 ;
}


