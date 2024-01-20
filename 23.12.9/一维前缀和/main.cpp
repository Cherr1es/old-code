#include <iostream>

using namespace std ;

typedef long long ll ;

const ll N = 1000000 ;

ll sum [ N ] ; //原
ll num [ N ] ; //前缀和

int main ( )
{
    ll i , t ;
    cin >> i ;

    for ( ll n = 1 ; n <= i ; n++ )
    {
        cin >> t ; //有i个数的序列
        sum [ n ] = t + sum [ n - 1 ] ;
    }

    ll tmp = 0 ;
    num [ 0 ]++ ;
    for ( )
    return 0 ;
}
