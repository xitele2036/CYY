#include <stdio.h>
 
enum DAY
{
      MON, TUE, WED, THU, FRI, SAT, SUN
};
 
int main()
{
    enum DAY day;
    day = 3;
    printf("%d",day);
    return 0;
}