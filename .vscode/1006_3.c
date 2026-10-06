#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("請輸入成績：");
    scanf("%d",&a);
    if (a>=60)
    {
        printf("請輸入出席率：");
        scanf("%d",&b);
        if (b>=80)
        {
            printf("及格");
        }
        else
        {
            printf("出席不及格");
        }
    }
    else
    {
        printf("成績不及格");
    }
    return 0;
}