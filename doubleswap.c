#include <stdio.h>

int swap(int *pa, double *pb, int *pc, double *pd);

int main(void)
{
    int a = 0, c = 0;
    double b = 0, d = 0;
    int *pa = &a;
    int *pc = &c;
    double *pb = &b;
    double *pd = &d;

    printf("첫 번째 사람의 나이와 키 입력: ");
    scanf("%d %lf", &a, &b);
    printf("두 번째 사람의 나이와 키 입력: ");
    scanf("%d %lf", &c, &d);

    swap(pa, pb, pc, pd);
    printf("첫 번째 사람의 나이와 키: %d, %.1lf\n", a, b);
    printf("두 번째 사람의 나이와 키: %d, %.1lf\n", c, d);

    return 0;
}

int swap(int *pa, double *pb, int *pc, double *pd)
{
    int temp;
    temp = *pa;
    *pa = *pc;
    *pc = temp;

    double temp2;
    temp2 = *pb;
    *pb = *pd;
    *pd = temp2;
}
