#include <stdio.h>

int main (void) { 
    int input_1, input_2;

    printf("첫 번째 숫자를 입력하시오: \n");
    scanf("%d", &input_1);

    printf("두 번째 숫자를 입력하시오: \n");
    scanf("%d", &input_2);

    printf("두수의 합= %d\n", input_1 + input_2);
    printf("두수의 차= %d\n", input_1 - input_2);
    printf("두수의 곱= %d\n", input_1 * input_2);
    printf("두수의 몫= %d\n", input_1 / input_2);
}
