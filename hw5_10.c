#include <stdio.h>

int main(void)
{
    int a;
    int count = 0;
    
    scanf("%d", &a);
    while (a > 9)
    {
        int d1 = a % 10;
        int d2 = (a / 10) % 10;
        if(d1 <= d2)
        {
            count++;
        }
        a /= 10;
    }
    if(count == 0)
        printf("YES\n");
    else 
        printf("NO\n");
    return 0;
}