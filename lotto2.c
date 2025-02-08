#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lotto();
void sort(int lotto_numbers[]);
int contains(int array[], int value);

int main()
{
    char input;
    srand(time(NULL));
    printf("로또 번호를 생성하려면 아무 키나 입력하십시오: ");
    scanf(" %c", &input);

    printf("로또 번호: ");
    lotto();

    return 0;
}

void lotto()
{
    int lotto_numbers[6] = {0};
    for (int i = 0; i < 6; i++)
    {
        int lotto_number;
        do
        {
            lotto_number = rand() % 45 + 1;
        } while (contains(lotto_numbers, lotto_number));

        lotto_numbers[i] = lotto_number;
    }

    sort(lotto_numbers);

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", lotto_numbers[i]);
    }
    printf("\n");
}

void sort(int lotto_numbers[])
{
    for (int i = 0; i < 5; i++)
    {
        int min = i;
        for (int j = i + 1; j < 6; j++)
        {
            if (lotto_numbers[j] < lotto_numbers[min])
            {
                min = j;
            }
        }
        int temp = lotto_numbers[i];
        lotto_numbers[i] = lotto_numbers[min];
        lotto_numbers[min] = temp;
    }
}

int contains(int array[], int value)
{
    for (int i = 0; i < 6; i++)
    {
        if (array[i] == value)
        {
            return 1;
        }
    }
    return 0;
}