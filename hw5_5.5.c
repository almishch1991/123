#include <stdio.h>

int main(void)
{
    int a, d1, d2, count = 0;
    scanf("%d", &a);
    for (; a>0; a /= 10)
    {
      if (a % 10 == (a / 10) %  10)
      {
        printf ("YES\n");
        count++;
        a /= 10;
      }
      else 
    printf("NO\n");
    return 0;
    }
    
}