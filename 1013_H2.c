#include <stdio.h>
int main()
{
    int drinks;
    printf ("飲料的選擇與價格：\n1. 紅茶 30元\n2. 綠茶 35元\n3. 奶茶 50元\n4. 果汁 45元\n輸飲料選項(1-4):");
    scanf("%d",&drinks);
    switch(drinks)
    {
        case 1:
        printf("紅茶 30元");
        break;
        case 2:
        printf("綠茶 35元");
        break;
        case 3:
        printf("奶茶 50元");
        break;
        case 4:
        printf("果汁 45元");
        break;
        default:
        printf("無此飲料選項");
    }
    return 0;
}