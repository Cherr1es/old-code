#include <iostream>
using namespace std ;

int main ( void )
{
    int tmp = 0 ;
    int x , y , z ;
    cin >> x >> y >> z ;
    int min = ( x < y ) ? ( ( x < z ) ? x : z ) : ( ( y < z) ? y : z) ;
    for ( int i = 1 ; i <= ( min / 2 ) ; i++ )
    {
        if (x % i == 0 && y % i == 0 && z % i == 0)
        {
            tmp = i ;
        }
    }
    cout << tmp ;
    return 0 ;
}

