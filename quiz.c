#include <stdio.h>

int main()
{
    int ary[4]= {1, 2, 3, 4};
int *p;
p = ary + 3;

*p = 5;
printf("%d", ary[3]);

    return 0;
};