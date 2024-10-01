#include <stdio.h>
 
int main(void)
{
    int a, min, max, i = 0;
    
    scanf("%d", &a);

    while (a > 0) 
    {
      if(i==0)
    {
      min=a % 10; 
      max=a % 10;
    } 
    else 
    {
        if (min>(a % 10)) 
          min=(a % 10); 
        if(max<(a % 10)) 
          max=(a % 10);
    }
    a= a / 10;
    i++;
  
    }
    printf("%d %d",  min, max);
        return 0;

}

