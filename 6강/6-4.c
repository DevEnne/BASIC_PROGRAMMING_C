#include <stdio.h>

int main() {
    int number, i, m, s;
    scanf("%d", &number);

    for (i = 1; i <= number; i += 2) {
        for (m = 0; m < (number - i) / 2; m++) {
            printf("-");
        }
        for (s = 0; s < i; s++) {
            printf("*");
        }
        for (m = 0; m < (number - i) / 2; m++) {
            printf("-");
        }
        printf("\n");
    }

    return 0;
}
