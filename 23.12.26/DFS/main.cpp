#include <iostream>
using namespace std ;
const int M = 105 ; //迷宫的最大行数
const int N = 105 ; //迷宫的最大列数
bool judge = false ; // 判断值 ，初始为不成立

int n , m ; //
int map [ M ] [ N ] ; // 迷宫地图
int res [ M ] [ N ] ; //走过的路线
int stepX [ 4 ] = { -1 , 0 , 1 , 0 } ; //水平移动
int stepY [ 4 ] = { 0 , -1 , 0 , 1 } ; //上下移动


void DFS ( int y , int x ) //输入迷宫的起点坐标
{
    if ( judge || y < 1 || x < 1 || y > M || x > M || map [ y ] [ x ] == 1 || res [ y ] [ x ] == 1 ) //排除特殊情况（ judge为真 ，坐标不符规则 ，起点坐标在迷宫范围外 ，起点位置为‘1’ ）
    {
        return ;
    }
    res [ y ] [ x ] = 1 ; //标记起点为（已经过）

    if ( y == n && x == m ) //到达终点 （ 迷宫的右下角 ）
    {
        judge = true ; // 判断值赋为真 ，结束
        return ;
    }

    //若位置符合规则且未到达终点则执行for中的代码
    for ( int i = 0 ; i < 4 ; i ++ ) // 1为向左，2为向上，3为向右，4为向下
    {
        DFS ( y + stepY [ i ] , x + stepX [ i ] ) ; //核心递归代码
    }
}

int main ( void )
{
    cin >> n >> m ; //行数和列数
    for ( int i = 0 ; i <= n - 1 ; i ++ )
    {
        for ( int p = 0 ; p <= m - 1 ; p ++ )
        {
            cin >> map [ i ] [ p ] ;
        }
    }
    DFS( 0 , 0 ) ;
    return 0 ;
}