#include <stdio.h>

int main(void)
{
    int a, count;

    
    scanf("%d", &a);
    while (a>0)
    
    {
        if(a%10 == 9)
        {
            count++;
        }
        a/=10;
    }
    if(count == 1)
        printf("YES");
    else 
        printf("NO");
    return 0;
}