#include <stdio.h>

int main(void)
{
    int a, b, i;
    scanf("%d %d", &a, &b);
    for (i=a; i<=b; i++)
    printf("%d ", i*i);
    return 0;
}