
#include <stdio.h>
#include <stdlib.h>
int main(){
    char Char_A,Char_B;
  printf("请输入两个字符，然后回车：\n");
  scanf("%c%c",&Char_A,&Char_B);
  printf("\n使用scanf()获取输入值以后：\n");
  printf("变量Char_A的值为：%c\n",Char_A);   
  printf("变量Char_B的值为：%c\n",Char_B);
  system("pause");
  return 0;
}