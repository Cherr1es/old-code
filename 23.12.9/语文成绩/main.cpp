#include <iostream>
#define N 5000000
using namespace std;
typedef long long ll;

ll num [ N + 1 ] ; //原
ll sum [ N + 1 ] ; //差分
ll tmp [ N + 1 ] ; //前缀和

int main ( void )
{
    int n,p,x,y,z ;
    cin >> n >> p ;

    for ( int i = 1 ; i <= n ; i ++ )
    {
        cin >> num [ i ] ; //输入学生初始成绩
    }

    for ( int i = 1 ; i <= n ; i++ )
    {
        sum [ i ] = 0 ; //初始化差分数组
    }

    for ( int i = 0 ; i < p ; i++ )
    {
        cin >> x >> y >> z ;
        sum [ x ] += z ;
        sum [ y + 1 ] -= z ;
    }

    tmp [ 1 ] = sum [ 1 ] ;
    num [ 1 ] += tmp [ 1 ] ;
    ll t = num [ 1 ] ;
    for ( int i = 2 ; i <= n ; i++ )
    {
        tmp [ i ] = sum [ i ] + tmp [ i - 1 ] ;
        num [ i ] += tmp [ i ] ;
        t = min ( t , num [ i ] ) ;
    }

    cout << t << endl ;

    return 0 ;
}