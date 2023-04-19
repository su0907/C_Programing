#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int x;
    int y;

    scanf("%d", &x);
   
    y = x*x-5*x+6;
    
    printf("%d", y);
}