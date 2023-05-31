#include <stdio.h>
#define NUMBER 5

int main (void) {
    int big[NUMBER];
    int i, big_number,count;

    for (i=0; i < NUMBER; i++) {
        scanf("%d", &big[i]);
    }

    big_number = big[0];
    for (i=0; i < NUMBER; i++) {
        if (big_number < big[i]) {
            big_number = big[i];
            count = 1;
        }
        else if (big_number == big[i]) {
            count++;
        }
    }

    printf("%d", big_number);
    printf("%d", count);

}
