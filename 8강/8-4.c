#include <stdio.h>

int get_divisor() {
        int x;
        scanf("%d", &x);
        return x;
}

int main (void) {
        int x;
        x = get_divisor();

        int i;
        for (i=1; i<=x; i++) {
                if (x % i == 0) {
                     printf("%d", i);   
                }
        }
}
