#include <stdio.h>

int main()
{
    int n, star = 1;
    scanf("%d", &n);

    int space = n - 1;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++)
        {
            if (i % 2 != 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }

        printf("\n");
        star += 2;
        space--;
    }

    int star2 = star - 4, space2 = 1;

    for (int i = n-1; i > 0; i--)
    {

        for (int j = 1; j <= space2; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= star2; j++)
        {
            if (i % 2 != 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }

        printf("\n");
        star2 -= 2;
        space2++;
    }

    return 0;
};