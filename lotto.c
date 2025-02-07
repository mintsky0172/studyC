#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a;
    srand(time(NULL));
    printf("로또 번호를 생성하려면 공백을 제외한 아무 키나 입력하십시오: ");
    scanf("%d", &a);
    printf("로또 번호: ");

    for (int i = 0; i < 6; i++)
    {
        int lotto_number = rand() % 45 + 1;
        printf("%d ", lotto_number);
    }
    printf("\n");

    return 0;
}