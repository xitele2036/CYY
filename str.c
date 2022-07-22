#include <stdio.h>
#include <string.h>
int main( )
{
    char string[6];
    char month[10];
    string[0] = 'C';
    string[1] = 'h';
    string[2] = 'i';
    string[3] = 'n';
    string[4] = 'a';
    string[5] = '\0';
    strcpy(month,"July");             //给字符数组 month 赋值
    int month_len = strlen(month);    //求字符串"July"的长度 4
    int month_len2 = sizeof(month);   //获得字符数组 month 有效元素个数 5（包含字符串结束符'\0'）

    printf("%s \n",month);
    printf("%d \n",month_len);
    printf("%d \n",month_len2);
}