#include <stdio.h>
#include <math.h>

int main (void) { 
    double money, percent, answer;
    int years;

    printf("투자원금 : ");
    scanf("%lf", &money);
    printf("이율(%%) : ");
    scanf("%lf", &percent);
    printf("투자기간 : ");
    scanf("%d", &years);

    answer = money * pow(1 + percent/100, years);
    printf("%d년 후의 원리금 = %lf", years, answer);

}
