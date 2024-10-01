#include <stdio.h>

int main(void)
{
    int a, n, b=99, c=999;
    scanf("%d", &n);

    a=n/100;
    a=a*100;
    a+=n%100;
    
if(a>b && a<=c)

    printf("YES\n");
    else
    printf("NO\n");
    

    return 0;


}