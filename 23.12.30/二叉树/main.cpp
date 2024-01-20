#include <iostream>
using namespace std ;

struct Node
{
    char Lchild ; //左子
    char Rchild ; //右子
}Node[100];

void DLR ( char x )
{
    if ( x == '*' )
    {
        return ;
    }
    cout << x ;
    DLR(Node[x].Lchild) ;
    DLR(Node[x].Rchild) ;
}

int main ( void )
{
    int n ;
    char root , data ;
    cin >> n ;
    cin >> root >> Node [ root ].Lchild >> Node [ root ].Rchild ;
    for ( int i = 0 ; i <= n - 1  ; ++ i )
    {
        cin >> data >> Node [ data ].Lchild >> Node [ data ] .Rchild ;
    }
    DLR(root) ;
    return  0 ;
}