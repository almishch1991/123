#include <stdio.h>
 
int main(void)
{
int a, i = 1, sum = 0, mult = 1, count = 0;
        scanf("%d", &a);
      for (i > 0; i < a; i++)
        {
            sum += i % 10;
             i /= 10;
             count++; 
        }
        
              printf ("%d %d\n", sum, i);
             
            return 0;
}
  