#include <stdio.h>

int main()
{
    double x, y, z;
    x = 300000.000000;
    y = 149600000.000000;
    printf("빛의 속도는 %lfkm/s\n", x);
    printf("태양과 지구와의 거리 %lfkm\n", y);
    z = y / x;
    printf("도달 시간은 %lf초", z);
    return 0;
}