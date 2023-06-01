#include <stdio.h>
#define NUMBER 10

int list[NUMBER];

void swap(int *px, int *py) {
    int tmp = *px;
    *px = *py;
    *py = tmp;
}

int main (void) {
    int i, k, number;
    for (i=0; i<NUMBER; i++){
        scanf("%d", &list[i]);
        while (list[i] < 1 || list[i] > 50) {
            scanf("%d", &list[i]);
        }
    }

    for (k = 0; k < NUMBER; k++) {
        for (i = 0; i < NUMBER -1; i++) {
            if (list[i] > list[i+1]) {
                swap(&list[i], &list[i+1]);
            }
        }
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", list[i]);
    }
}
