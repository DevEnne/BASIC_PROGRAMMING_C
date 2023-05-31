#include <stdio.h>
#define NUMBER 10

int main (void) {
    int i, k,num;
    int list[NUMBER];
    
    for (i=0; i < NUMBER; i++) {
        scanf("%d", &list[i]);
    }

    for (k = 0; k < NUMBER; k++) {
        for (i = 0; i < NUMBER -1; i++) {
            if (list[i] > list[i+1]) {
                int tmp = list[i];
                list[i] = list[i+1];
                list[i+1] = tmp;
            }
        }
    }

    for (i=0; i < NUMBER; i++) {
        printf("%d", list[i]);
    }
}
