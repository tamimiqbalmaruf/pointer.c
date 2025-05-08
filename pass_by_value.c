#include <stdio.h>

void fun(int x)
{
    x = 20;
    printf("fun => %p\n", &x);
}

int main()
{
    int x = 10;

    fun(x);
    // printf("%d\n", x);
    printf("main => %p\n", &x);
    return 0;
};