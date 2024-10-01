#include <stdio.h>
 
int main(void)
{
    int a, count_1 = 0;
    scanf("%d", &a);
    
    for (a > 0; a != 0; a /=10)
    {
    if(a % 2 == 0) 
    
        count_1++; 
    } 
    printf("%d", (count_1));
        return 0;

}


