#include <stdio.h>
int add(int q,int p)
{
    return q*p;
}

int main()
{
    int q;
    int p;
    printf("請輸入購買數量:");
    scanf("%d",&q);
    printf("請輸入購買金額:");
    scanf("%d",&p);
    printf("總金額:%d\n",add(q,p));
    return 0;
}
