#include <stdio.h>

int main()
{
    int value1, value2, sum=0, average=0;
    printf("value1, value2 값을 입력하시오 :");
    scanf("%d %d", &value1, &value2);

    sum = value1 + value2;
    average = sum / 2;

    if (average >= 95)
    {
        printf("Very Good");
    }
    else
    {
        printf("Just Good");
    }
    return 0;
}