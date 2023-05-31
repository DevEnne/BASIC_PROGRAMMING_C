#include <stdio.h>

int main (void) { 
    int x;
    scanf("%d", &x);

    if (x > 0) {
        if(x % 3 == 0 && x % 4 == 0) {
            printf("YES");
        }
        else {
            printf("NO");
        }
    }
    else {
        printf("Wrong input");
    }

}
