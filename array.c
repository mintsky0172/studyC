#include <stdio.h>

int main(void)
{
    int ary1[6] = {1, 2, 3, 4, 5, 0};
    int ary2[6] = {6, 7, 8, 9, 10, 0};
    int ary3[6] = {11, 12, 13, 14, 15, 0};
    int ary4[6] = {16, 17, 18, 19, 20, 0};
    int ary5[6] = {0};
    int *pary[5] = {ary1, ary2, ary3, ary4, ary5};

    int i, j;
    for (i = 0; i < 4; i++)
    {
        int rowSum = 0;
        for (j = 0; j < 5; j++)
        {
            rowSum += pary[i][j];
        }
        pary[i][5] = rowSum;
    }

    for (j = 0; j < 5; j++)
    {
        int colSum = 0;
        for (i = 0; i < 4; i++)
        {
            colSum += pary[i][j];
        }
        pary[4][j] = colSum;
    }

    int total = 0;
    for (i = 0; i < 4; i++)
    {
        total += pary[i][5];
    }
    pary[4][5] = total;

    for (j = 0; j < 5; j++)
    {
        for (i = 0; i < 6; i++)
        {
            printf("%d ", pary[j][i]);
        }
        printf("\n");
    }

    return 0;
}