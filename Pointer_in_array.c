#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        printf("%p\n", &a[i]);
    }

    printf("Array er nam: %d\n", *(a+4) = 100);

    return 0;
};