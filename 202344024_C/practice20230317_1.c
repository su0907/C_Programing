#include <stdio.h>

int main()
{
    double x, y, z; //실수 1, 2, 3
    double sum, avg;
    printf("3개의 실수를 입력하시오 : ");
    scanf("%lf %lf %lf", &x, &y, &z);
    sum = x + y + z;
    printf("합계 = %.2lf\n", sum); //%.2는 소수점 이하를 2자리로 표시
    avg = sum / 3;
    printf("평균 = %.2lf\n", avg);
    return 0;
}