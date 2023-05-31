#include <stdio.h>

int main (void) { 
    int input_money, price;
    int KRW_500, KRW_100;
    int output_money;
    
    printf("투입한 돈: ");
    scanf("%d", &input_money);

    printf("물건 값: ");
    scanf("%d", &price);

    output_money = input_money-price;
    printf("거스름돈: %d\n", output_money);

    printf("500원 동전의 개수: %d\n", output_money / 500);
    KRW_500 = output_money % 500;

    printf("100원 동전의 개수: %d\n", KRW_500 / 100);
    KRW_100 = KRW_500 % 100;

    printf("10원 동전의 개수: %d\n", KRW_100 / 10);


}
