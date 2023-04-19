#include <stdio.h>

int main(void)
{
    int i=1, T, x, y, sum=0;

    scanf("%d", &T);
    while (i <= T)
    {
        scanf("%d %d", &x, &y);
        sum = x + y;
        printf("%d\n", sum);
        i++;
    }
    return 0;
}