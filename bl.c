#include <stdio.h>
#include <stdlib.h>

int x;
int y;
int addtwonum()
{
    extern int x;
    extern int y;

    x = 1;
    y = 2;


    return x+y;
}

int main()
{
    int result;

    result = addtwonum();

    printf("result 为: %d \n",result);
    system("pause");    // 防止运行后自动退出，需头文件stdlib.h
    return 0;
}