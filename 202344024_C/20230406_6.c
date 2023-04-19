#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    srand((unsigned)time(NULL)); //난수 발생기 시드 설정, time 왜 에러? 개킹받
    int answer = rand()%100+1; //정답을 난수로 발생한다.
    int guess;
    int tries = 0;
    // 반복구조
    do {
        printf("정답을 추측하여 보시오: ");
        scanf("%d", &guess);
        tries++;
        if (guess > answer)
            printf("High \n");
        if (guess < answer)
            printf("Low \n");
    } while (guess != answer); //guess 값이 answer와 다르다면 반복
    printf("축하합니다. 시도횟수 = %d\n", tries);
    return 0;
}