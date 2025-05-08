#include <stdio.h>

void fun(int *ptr)
{
    *ptr = 20;
    printf("fun => %p\n", ptr);
}

int main()
{
    int x = 10;

    fun(&x);
    printf("%d\n", x);
    printf("main => %p\n", &x);
    return 0;
};