#include <stdio.h>

int main(void)
{
    int x, i=1, sum=0;

    printf("정수를 입력하시오 : ");
    scanf("%d", &x);

    while (i<=x)
    {
        if (i%2==0)
        {
            sum += i;
        }
        i++;
    }
    printf("1부터 %d까지의 짝수합은 %d입니다.", x, sum);
    return 0;
}