#include <stdio.h>

int main(void)
{
    int a, c; char b;
    int res;
    printf("사칙연산 입력(정수): ");
    scanf("%d%c%d", &a, &b, &c);

    if (b == '+') res = (int)(a + c);
    else if(b == '-') res = (int)(a - c);
    else if(b == '*') res = (int)(a * c);
    else if(b == '/') res = (int)(a / c);
    else printf("잘못된 연산자를 입력하셨습니다.");

    printf("%d%c%d= %d", a, b, c, res);

    return 0;
}