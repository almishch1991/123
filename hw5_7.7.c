#include <stdio.h>
int main()
{
int a, k = 0;
int j = 0;
scanf("%d", &a);
while(a > 0)
{
    int d1 = a % 10;
    int d2 = ((a / 10) % 10);
    if (d2 != d1)
        k++;
        j++;
        
    a/=10;  
}

  printf("%d %d\n", k, j);   

return 0;
}
