#include <stdio.h>
#include <stdlib.h>
int main( )
{
    int i,s=0;            //初始化
    for(i=1; i<=100; i++)
        s += i;           //s = s + i;每次执行时 s 都在原基础上增加 i
    printf("s=%d\n",s);
    system("pause");
    return 0;
}