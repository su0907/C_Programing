#include <stdio.h>

int main()
{
    int x;

    printf("변수 x의 크기 : %d\n", sizeof(x));
    printf("char형의 크기 : %d\n", sizeof(char));
    printf("int형의 크기 : %d\n", sizeof(int));
    printf("short형의 크기 : %d\n", sizeof(short));
    printf("long형의 크기 : %d\n", sizeof(long)); //32는 4, 64는 8
    printf("float형의 크기 : %d\n", sizeof(float));
    printf("double형의 크기 : %d\n", sizeof(double));
    
    return 0;
}