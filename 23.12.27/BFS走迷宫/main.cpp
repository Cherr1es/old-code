#include <iostream>
#include <queue>
const int N = 1000 ;
const int M = 100000 ;
using namespace std ;

int data [ N ] ;
int map [ N ] [ N ] ;
int tra [ N ] [ N ] ;
bool judge = false ;

int stepX [ 4 ] = { -1 , 0 , 1 , 0 } ; //水平移动
int stepY [ 4 ] = { 0 , -1 , 0 , 1 } ; //上下移动

void BFS ( int sy , int sx )
{
    if ( judge || sy < 1 || sx < 1 || sy > N || sx > N )
    {
        return ;
    }
    if ( map [ sy ] [ sx ] = 0 )
    {

    }
}

int main ( void )
{
    int n , m ;
    cin >> n >> m ;
    for ( int i = 0 ; i <= n ; i ++ )
    {
        cin >>
    }
    return 0 ;
}