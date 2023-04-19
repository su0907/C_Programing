#include <stdio.h>

int main()
{
    double dollar, rate; //달러, 환율
    int won; //원화
    printf("환율을 입력하시오 : ");
    scanf("%lf", &rate);
    printf("원화 금액을 입력하시오 : ");
    scanf("%d", &won);
    dollar = won / rate;
    printf("원화 %d원은 %lf달러입니다.", won, dollar);
    return 0;
}