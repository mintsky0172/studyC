#include <stdio.h>

int main()
{
    int max_len = 0;
    int current_len = 0;
    int c;

    printf("단어를 입력하세요 (Ctrl+Z를 누르면 종료): \n");

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (current_len > max_len)
            {
                max_len = current_len;
            }
            current_len = 0;
        }
        else
        {
            current_len++;
        }
    }

    if (current_len > max_len)
    {
        max_len = current_len;
    }

    printf("가장 긴 단어의 길이: %d\n", max_len);

    return 0;
}
