#include<stdio.h>
void  fun (int x,int y )
{
    x=x+y;
    y=x-y;
    x=x-y;
    printf("%d,%d, ",x,y);
}

void main()
{   int x=2,y=3;
    fun(x,y);
    printf("%d,%d\n",x,y);
    return ;
}