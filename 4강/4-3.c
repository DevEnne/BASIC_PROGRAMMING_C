#include <stdio.h>

int main (void) { 
    int number_1, number_2;

    printf("첫 번째 정수를 입력하시오 : ");
    scanf("%d", &number_1);

    printf("두 번째 정수를 입력하시오 : ");
    scanf("%d", &number_2);

    printf("몫은 %d이고 나머지는 %d입니다.", number_1 / number_2, number_1 % number_2);
}
