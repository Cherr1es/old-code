#include <iostream>
using namespace std ;

typedef struct _Node
{
    char data ;
    struct _Node* Lchild ; //左子
    struct _Node* Rchild ; //右子
    _Node ( char text ) : data ( text ) , Lchild ( nullptr ) , Rchild ( nullptr ){} //初始化
}Node;

Node* input ( char data ) // 输入数据
{
    if ( data == '*' )
    {
        return nullptr ; //若输入的是*则无数据
    }
    return new Node( data ) ; //返回一个新结构体
}

void Build ( Node* root , int a )
{
    if ( a == 0 )
    {
        return ;
    }

    char D , L , R ;
    cin >> D >> L >> R ;//连续输入的三个字母按顺序分配到D，L，R中
    root = new Node ( D ) ;
    root -> Lchild = input ( L ) ;
    root -> Rchild = input ( R ) ;

    Build ( root -> Lchild , a - 1 ) ;
    Build ( root -> Rchild , a - 1 ) ;

}

void DLR ( Node* root )
{
    if ( root == nullptr )
    {
        return ;
    }
    cout << root -> data << endl ;
    DLR ( root -> Lchild ) ;
    DLR ( root -> Rchild ) ;

}

int main ( void )
{
    int n ;
    cin >> n ;

    char Rootdata ;
    cin >> Rootdata ; //输入根节点数据

    Node* root = new Node ( Rootdata ) ;
    Build ( root , n ) ;
    DLR ( root ) ;

    return 0 ;
}