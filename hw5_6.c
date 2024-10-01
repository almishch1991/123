#include <stdio.h>
int main()
{
int a, k = 0;
scanf("%d", &a);
while(a > 0)
{
    int d1 = a % 10;
    int d2 = ((a / 10) % 10);
    if (d2 == d1)
        k = 1;
    a/=10;  
}
if(k==1)
  printf("YES\n");   
else
  printf("NO\n");
return 0;
}
