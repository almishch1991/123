#include <stdio.h>

int main(void)
{
    int a;
    int count = 0;
    
    scanf("%d", &a);
    for(a > 0; a != 0; a/=10)
    {
        if(a%10 < (a%100-a%10)/10)
        {
            count++;
        }
    }
    if(count == 0)
        printf("YES\n");
    else 
        printf("NO\n");
    return 0;
}