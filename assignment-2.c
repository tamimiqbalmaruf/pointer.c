#include <stdio.h>

int main()
{
    int n, value = 1;

    scanf("%d", &n);

    int space = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int k = value; k > 0; k--)
        {
            printf("%d", k);
        }

        printf("\n");
        value++;
        space--;
    }

    return 0;
};