#include <stdio.h>
#define Sum(x, y) ((x) + (y))
#define Sub(x, y) ((x) + (y))
#define Mul(x, y) ((x) + (y))
#define Div(x, y) ((x) + (y))

int main(void)
{
    int x, y;
    char a;
    printf("수식 입력: ");
    scanf("%d %c %d", &x, &a, &y);
    switch(a)
    {
        case '+': 
            printf("%d + %d = %d\n", x, y , Sum(x, y));
            break;
        case '-': 
            printf("%d - %d = %d\n", x, y , Sub(x, y));
            break;
        case '*': 
            printf("%d * %d = %d\n", x, y , Mul(x, y));
            break;
        case '/':
            printf("%d / %d = %d\n", x, y , Div(x, y));
            break;
    }

    return 0;
}
