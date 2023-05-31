#include <stdio.h>
#include <math.h>

int main (void) { 
    int x;
    double answer;

    printf("정수를 입력하시오: ");
    scanf("%d", &x);

    answer = (pow(x, 3) - 20) / (x-7);
    printf("수식의 값은 %lf입니다.", answer);

}
