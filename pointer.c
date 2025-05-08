#include <stdio.h>

int main()
{
    int x = 10;
    printf("%d\n", x);
    printf("%p\n", &x);

    int* ptr;

    ptr = &x;

    *ptr = 20;

    printf("%p\n", ptr);

    printf("%d\n", *ptr);

    return 0;
};