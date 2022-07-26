#include <stdio.h>
#include <stdlib.h>
long int fac(int x)           //定义阶乘函数
{
    int i;
    long int s = 1;
    for(i=1;i<=x;i++)
        s *= i;
    return s;
}
int main( )                    //主函数
{
    int m, n;
    printf("输入m和n(m≤10,n≤m):\n");
    scanf("%d %d",&m, &n);
    printf("%d %d %d\n",fac(m),fac(m-n),fac(n));
    printf("C(m,n)=%ld\n",fac(m)/(fac(m-n)*fac(n)));
    system("pause");
    return 0;
}