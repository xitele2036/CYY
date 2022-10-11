#include<stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};
    printf("%d\n", &arr[4] - &arr[1]);
    printf("%d\n", sizeof(arr));
    printf("%d\n", &arr);
    return 0;
}