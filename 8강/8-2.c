#include <stdio.h>

int factorial() {
        int input_number, factorial;
        scanf("%d", &input_number);
    
        for (factorial = input_number - 1; factorial>=1; factorial--) {
                input_number = input_number * factorial;
        }
        return input_number;
}

int main(void) {

        int x;
        x = factorial();
        printf("%d", x);
}
