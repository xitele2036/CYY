#include<stdio.h>
#include<string.h>
//#define _CRT_SECURE_NO_WARNINGS
struct Inventory//商品
{
	char description[20];//货物名
	int quantity;//库存数据
};
int main()
{
	struct Inventory sta = { "iphone",20 };
	struct Inventory* stp = &sta;
	char name[20] = { 0 };
	int num = 0;
	(*stp).quantity = 30;
	stp->quantity = 30;

    printf("%d\n",sizeof(name));
    printf("%d\n",sizeof(num));

	strcpy_s(name,sizeof(stp->description),stp->description);
	printf("%s %d\n", stp->description, stp->quantity);
	printf("%s %d\n", (*stp).description, (*stp).quantity);
	return 0;
}