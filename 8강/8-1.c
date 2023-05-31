#include <stdio.h>

int main(void) {

    int input_number, factorial;
    scanf("%d", &input_number);
    
    for (factorial = input_number - 1; factorial>=1; factorial--) {
        input_number = input_number * factorial;
    }
    printf("%d", input_number);
}
