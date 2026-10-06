#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("請輸入成績：");
    scanf("%d",&a);
    printf("請輸入出席率：");
    scanf("%d",&b);
    if (a>=60)
    {
        if (b>=80)
        {
            printf("及格");
        }
        else
        {
            printf("不及格");
        }
    }
    else
    {
        printf("不及格");
    }
    return 0;
}