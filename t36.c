#include<stdio.h>

int fibonaci(int i)
{
    if (i == 0)
    {
        return 0;
    }
    if (i == 1)
    {
        return 1;
    }
    return fibonaci(i-1) + fibonaci(i-2);
}

int main()
{
    int i,count;
    printf("斐波那契额数列：");
    scanf("%d",&count);
    for (i = 0; i <= count; i++)
    {
        printf("%d的菲波那切数列是%d \n",i,fibonaci(i));
    }
    
    
    return 0;
}