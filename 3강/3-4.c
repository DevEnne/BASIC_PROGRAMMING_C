#include <stdio.h>

int main (void) { 
    long long int money, years;

    scanf("%lld", &money);
    scanf("%lld", &years);

    printf("%lld", (money * 12) * years);
}
