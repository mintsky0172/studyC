#include <stdio.h>
#include <string.h>

void swap(char* a, char* b);

int main(void)
{
    char a[100], b[100], c[100];

    printf("세 단어 입력: ");
    scanf("%s %s %s", a, b, c);

    if (strcmp(a, b) > 0) swap(a, b);
    if (strcmp(a, c) > 0) swap(a, c);
    if (strcmp(b, c) > 0) swap(b, c);

    printf("%s, %s, %s\n", a, b, c);
    return 0;
}

void swap(char* a, char* b)
{
    char temp[100];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}
