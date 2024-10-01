#include <stdio.h>

int main() {
    int a, count;
    
    scanf("%d", &a);

    while (a > 0) {
        if ((a % 2) == 1) {
            printf("NO\n");
            return 0;
        }

        a /= 10;
    }

    printf("YES\n");
    return 0;
}