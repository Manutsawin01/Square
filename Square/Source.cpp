#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int n, loop1, loop2;
    scanf("%d", &n);
    if (n > 100 || n < 1)
    {
        printf("Error");
    }
    else
    {
        for (loop1 = 0; loop1 < n; loop1++)
        {
            for (loop2 = 0; loop2 < n; loop2++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
