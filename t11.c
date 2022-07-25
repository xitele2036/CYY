#include<stdio.h>

int Max(int a, int b)
{
    if(a>b) return a;
    else return b;

}

int main()
{
    int a,b;
    printf("enter two number:");
    scanf("%d %d",&a,&b);
    printf("%d",Max(a,b));
}