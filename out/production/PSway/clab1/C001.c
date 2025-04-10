#include <stdio.h>

int main(void)
{
    int size;
    int stars, blank1, blank2;
    int i, j;

    scanf("%d", &size);
    i = -1;
    while (++i < size)
    {
        j = 0;
        while (j < size * 2)
        {
            if ((i == j) || (i + j == (size * 2 - 1)))
                printf("*");
            else
                printf(" ");
            j++;
        }
        printf("\n");
    }
    i = -1;
    while (++i < size)
    {
        j = 0;
        while (j < size * 2)
        {
            printf("*");
            j++;
        }
        printf("\n");
    }
    i = -1;
    while (++i < size)
    {
        j = 0;
        while (j < size * 2)
        {
            if ((i <= j) && (i + j <= (size * 2 - 1)))
                printf("*");
            else
                printf(" ");
            j++;
        }
    printf("\n");
    }
    i = -1;
    while (i++ < size * 2)
        printf("*");
}
