#include <iostream>
typedef long long ll ;
const ll N = 100000 ;
using namespace std ;

ll num [N + 1 ] ;
ll sum [N + 1 ] ; //前缀和

int main ( void )
{
    ll n , t ;
    cin >> n ; //序列长度为n

    for ( ll i = 1 ; i <= n ; i++ )
    {
        cin >> t ;
        sum [ i ] = t + sum [ i -1 ] ;
    }

    ll text = 0 ;
    num [ 0 ] ++ ;
    for ( ll i = 1 ; i <= n ; i++ )
    {
        for ( ll p = 0 ; p * p <= N ; p++ )
        {
            ll tmp = sum [ i ] - ( p * p ) ;
            if ( tmp >= 0 )
            {
                text += num [ tmp ] ;
            }
        }
        num [ sum [ i ] ]++ ;
    }
    cout << text << endl ;

    return 0 ;
}