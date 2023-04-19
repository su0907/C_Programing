#include <stdio.h>

int main()
{
    int x, y, z;
    int a, b, c, d;
    printf("물건 값을 입력하시오: ");
    scanf("%d", &x); //물건 값 = x
    printf("투입한 금액을 입력하시오 :");
    scanf("%d", &y); //투입한 금액 = y
    printf("거스름 돈은 다음과 같습니다\n");
    z = y - x; //z는 거스름돈
    a = z / 1000;// a는 천원권
    z = z % 1000; //나머지연산자로 남은 잔돈 초기화
    printf("천원권 : %d장\n", a);
    b = z / 500;//b는 오백
    z = z % 500; //나머지연산자로 남은 잔돈 초기화
    printf("오백원 동전 : %d개\n", b);
    c = z / 100; //c는 백원
    z = z % 100; //나머지연산자로 남은 잔돈 초기화
    printf("백원 동전 : %d개", c);

    return 0;


}