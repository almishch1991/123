#include <stdio.h>

int main(void) {
    int a, k, num, i=0;
    
    scanf("%d", &a);

    while (a > 0) {
        num = a % 10;
        k = num/9;
		
        if (k == 1)
		 {	   
	       printf ("YES\n"); 
           return 0;
        }
        a /= 10;	
    }
    printf("NO\n");
}


