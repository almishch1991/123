#include <stdio.h>
 
int main(void)
{
    int a, i = 1, flag = 0, count = 0;
    scanf("%d", &a);
   for (i = 1; i <= a; i++)
{
    if (a % i == 0)
    count++;
}
    if ( count > 2)
    printf ("NO\n");
    else
    printf ("YES\n");      
return 0;
}

    
    



