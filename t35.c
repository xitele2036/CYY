#include<stdio.h>

double fact(unsigned int i)
{
    if(i <= 1)
    {
        return 1;
    }
    return i * fact(i - 1);
}

int main()
{
    
    int i;
    printf("输入想要阶乘的数：");
    scanf("%d",&i);
    printf("%d 的阶乘为 %f\n",i,fact(i));
    return 0;
}