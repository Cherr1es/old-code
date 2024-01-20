#include <stdio.h>
#define tmp 1000000
int arr [ tmp ] ;
int locate ( int i )
{
    int t = 1 ;
    while ( t == i )
    {
        long long mid = ( t + tmp ) / 2 ;
        if ( mid > i )
        {
            t = mid - 1 ;
        }
        else if ( mid < i )
        {
            t = mid + 1 ;
        }
    }
    return t ;
}

int ben ( int i )
{
    int t = 0 ;
    while ( t != i )
    {
        t ++ ;
    }
    return  t ;

}
int main ( void )
{
    arr [ 999999 ] = 6 ;
    //printf ("%d",arr [ben(999999) ]) ;
    printf ("%d",arr [locate(999999) ]) ;
    return 0 ;
}