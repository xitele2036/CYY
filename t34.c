#include<stdio.h>
#include<stdlib.h>

int main()
{
    int dividend = 20;
    int divisor = 10;
    int quotient;

    if(divisor == 0){
        fprintf(stderr,"除数为0退出运行...\n");
        exit(EXIT_FAILURE);
    }

    quotient = dividend / divisor;
    fprintf(stderr,"quotient变量值为: %d\n", quotient);

    exit(EXIT_SUCCESS);
}