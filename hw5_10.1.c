#include <stdio.h>
 
int main(void)
{
unsigned int a, b = 0, flag = 0;
    scanf("%d", &a);
    b = a%10;
    a /=10;
    while (a != 0)
    {
        if (a%10 >= b)
    	  {
            flag =1;
        	break;
    	  }
    b = a%10;
    a/=10;  	
    }
    printf("%s", flag ? "NO" : "YES");
    return 0;
}
