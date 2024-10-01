#include <stdio.h>
 
int main(){
int a, other_nums, num;
	scanf("%d", &a);
	while (a != 0)
	{
    	        
    	
            if (a % 2 == 0)
        	  {
                  printf("YES\n");
                
                  return 0;
        	  
        	  other_nums /= 10;
    	    }
    	    a /= 10;
	}
	printf("NO\n");
	return 0;
}
