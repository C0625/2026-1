#include <stdio.h>
void unlock(int n)
{
    if (n<1)
    {
        return;
    }
    printf("解鎖第%d層魔法能量\n",n);
    unlock(n-1);
}

int main()
{
    int floors;
    printf("請輸入魔法金字塔層數：");
    scanf("%d",&floors);
    unlock(floors);
    printf("所有樓層解鎖完成！\n");
    return 0;
}