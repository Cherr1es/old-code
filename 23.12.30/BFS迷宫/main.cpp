#include <iostream>
#include <queue>
const int N = 1000 ;
const int M = 100000 ;
using namespace std ;

typedef struct _Node
{
    int y , x ;
}Node ;
queue < Node > Q ;

int map [ N ] [ N ] ;
int tra [ N ] [ N ] ;
int res [ N * N ] ;

int stemY [ 4 ] = { 0 , 1 , 0 , - 1 } ;
int stepX [ 4 ] = { 1 , 0 , - 1 , 0 } ;

void BFS ( )
{

}
int main ( void )
{
    int n , m ;
    int data ;

    cin >> n >> m ;
    for ( int i = 1 ; i <= n ; i ++ )
    {
        for ( int t = 1 ; t <= n ; t ++ )
        {
            cin >> data ;
        }
    }

    return 0 ;
}