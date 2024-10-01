#include <stdio.h>

int main(void)
{
    int a;
    int count = 0;
    
    scanf("%d", &a);
    for(a > 0; a != 0; a/=10)
    {
        if(a%2 == 1)
        {
            count++;
        }
    }
    if(count == 0)
        printf("YES");
    else 
        printf("NO");
    return 0;
}