#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, attempts = 0;
    srand(time(0));            // 시간을 기반으로 난수 생성기 초기화
    number = rand() % 100 + 1; // 1부터 100 사이의 숫자 생성

    printf("1부터 100 사이의 숫자를 추측해보세요!\n");

    do
    {
        printf("숫자를 입력하세요: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number)
        {
            printf("더 작은 숫자를 입력해주세요.\n");
        }
        else if (guess < number)
        {
            printf("더 큰 숫자를 입력해주세요.\n");
        }
        else
        {
            printf("축하합니다! 숫자를 맞췄습니다.\n");
            printf("시도한 횟수: %d\n", attempts);
        }
    } while (guess != number);

    return 0;
}