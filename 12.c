#include <stdio.h>
 
int main(void)
{
    int a, count_1 = 0, count_2 = 0;
    scanf("%d", &a);
    for (a > 0; a != 0; a /= 10)
    {
    if(a % 2 == 0) 
    {
        count_1++;
    } 
    else 
    {
        count_2++;
    }
    }
    printf("%d %d", count_1, count_2);
        return 0;

}

