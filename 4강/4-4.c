#include <stdio.h>

int main (void) { 
    int input_number; 
    int INT_100, INT_10;

    printf("정수를 입력하시오 : ");
    scanf("%d", &input_number);

    printf("백의 자리수: %d", input_number / 100);
    INT_100 = input_number % 100;

    printf("십의 자리수: %d", INT_100 / 10);
    INT_10 = INT_100 % 10;

    printf("일의 자리수: %d", INT_10);

}
