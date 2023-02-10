#include<stdio.h>

void zuobiao(int * x, int * y)
{
    *x -= 2;
    *y += 2;
}

int main()
{
    
    int x = 64;
    int y = 88;
    printf("%d %d\n",x,y);
    zuobiao(&x,&y);
    printf("[%p %p]\n",x,y);
    return 0;
}