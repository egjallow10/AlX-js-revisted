#include <stdio.h>


void modify_my_param(int m)
{
    m = 402;
}


int main(void)
{
    int n;
    n = 98;

    modify_my_param(n);
    printf("Numbers 'n': %d\n", n);
    return(0);
}
