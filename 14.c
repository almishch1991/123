#include <stdio.h>
 
int main(void)
{
    int a, sum = 0;
    scanf("%d", &a);
    for (a > 0; a != 0; a /= 10)
    {
    sum += a % 10;
    } 
    if (sum == 10)     
     printf ("YES\n");
    else
     printf("NO\n");
     return 0;

}

