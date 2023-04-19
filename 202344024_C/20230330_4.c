#include <stdio.h>

int main()
{
    char op;
    int x, y, z;
    printf("수식을 입력하시오(예: 2 + 5) >> ");
    scanf("%d %c %d", &x, &op, &y);

    switch(op)
    {
        case '+':
        z = x + y;
        break;
        
        case '-':
        z = x - y;
        break;

        case '*':
        z = x * y;
        break;

        case '/':
        z = x / y;
        break;

        case '%':
        z = x % y;
        break;

        default:
        printf("지원되지 않는 연산자입니다.\n");
        break;
    }
    printf("%d %c %d = %d", x, op ,y, z);
}