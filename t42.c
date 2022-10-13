#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS
struct Student
{
	char s_name[20];//姓名
	int age;//年龄
	float score;//成绩
};
int main()
{
	struct Student cla[] =
	{
		{"liuwen",18,149.9},
		{"qnge",18,145},
		{"anan",19,188},
	};
	return 0;
}