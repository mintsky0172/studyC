#include <stdio.h>

void input_data(int *pa, int *pb);
void swap_data(int *pa, int *pb);
void print_data(int a, int b);

int a, b;

int main(void)
{
    input_data(&a, &b);
    swap_data(&a, &b);
    print_data(a, b);

    return 0;
}

void input_data(int *pa, int *pb)
{
    printf("두 정수를 입력하세요: ");
    scanf("%d %d", &a, &b);
}

void swap_data(int *pa, int *pb)
{
    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void print_data(int a, int b) { printf("교환된 정수: %d, %d\n", a, b); }