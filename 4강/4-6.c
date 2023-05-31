#include <stdio.h>

int main (void) { 
    double x,y;

    printf("2개의 실수를 입력하시오: ");
    scanf("%lf", &x);
    scanf("%lf", &y);

    printf("정수부의 합 = %d", (int)x + (int)y);

}
