#include <stdio.h>

int main(void)
{
    char code = 'A';
    printf("%d %d %d \n", code, code + 1, code + 2); //65 66 67이 출력
    printf("%c %c %c \n", code, code + 1, code + 2); // A B C가 출력
    return 0;
}