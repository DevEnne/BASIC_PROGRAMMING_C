#include <stdio.h>

int main (void) { 
    int days, plane;
    int money, hotel;

    printf("여행은 몇박인가요?: ");
    scanf("%d", &days);

    printf("항공권 가격: ");
    scanf("%d", &plane);

    printf("호텔 1박 가격: ");
    scanf("%d", &hotel);

    printf("하루에 필요한 용돈: ");
    scanf("%d", &money);

    printf("====================\n");
    printf("총 여행 비용: %d", (hotel * days) + (money * (days + 1)) + plane );
    printf("====================\n");
