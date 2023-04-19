#include <stdio.h>

int main()
{
    int x;

    printf("무슨 햄버거 먹을까? 1부터 100까지 골라봐 :");
    scanf("%d", &x);

    if(x>50)
    {
        printf("KFC 당첨!");
    }
    else
    {
        printf("맘스터치 당첨!"); 
    }
    return 0;
}