#include <stdio.h>
 
int main(void)
{
 int num, other_num, number;
 int i = 0;   
    scanf("%d", &number);
    while (number > 0) 
    {
        num = number % 10; // выделили число
             number/=10;
            if (num % 9 == 0)
            {
                i=++;

            }
      
                if (i == 1)   
                     printf ("YES\n");                        
                else    
                    printf("NO\n");   
                    return 0;                    
  
    }   
       
    
}
         
       
       
