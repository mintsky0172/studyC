#include <stdio.h>
#include <stdlib.h>

int is_prime(int num)
{
    if (num < 2)
    {
        return 0;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    int a;
    char b = 'X';
    int *primes = NULL;   // 소수를 저장할 동적 배열
    int prime_count = 0;  // 소수 개수
    int capacity = 10;    // 초기 배열 용량

    printf("2 이상의 정수를 입력하세요: ");
    if (scanf("%d", &a) != 1 || a < 2)
    {
        printf("잘못된 입력입니다. 2 이상의 정수를 입력해주세요.\n");
        return 1;
    }

    primes = (int *)malloc(capacity * sizeof(int));  // 초기 배열 할당
    if (primes == NULL)
    {
        printf("메모리 할당 실패\n");
        return 1;
    }

    for (int num = 2; num <= a; num++)
    {
        if (is_prime(num))
        {
            if (prime_count >= capacity)
            {  // 배열 용량 초과 시 재할당
                capacity *= 2;
                primes = (int *)realloc(primes, capacity * sizeof(int));
                if (primes == NULL)
                {
                    printf("메모리 재할당 실패\n");
                    return 1;
                }
            }
            primes[prime_count++] = num;  // 소수 저장
        }
    }

    printf("%d까지의 소수:\n", a);

    int printed_count = 0;
    for (int i = 0; i < a - 1; i++)
    {
        if (i < prime_count)
        {
            printf("%5d", primes[i]);
        }
        else
        {
            printf("%5c", b);
        }

        printed_count++;

        if (printed_count % 5 == 0)
        {
            printf("\n");
        }
    }

    if (printed_count % 5 != 0)
    {  // 마지막 줄에 5개 미만의 항목이 있는 경우 줄바꿈 추가
        printf("\n");
    }

    free(primes);  // 동적 할당된 메모리 해제
    return 0;
}