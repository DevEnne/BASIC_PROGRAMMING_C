#include <stdio.h>

int NUMBER,n,m;

void swap(int *px, int *py) {
    int tmp = *px;
    *px = *py;
    *py = tmp;
}

void sort_array(int *v, int n, int m) {
    int i, k, number;

    if (m == 0){
        for (k = 0; k < NUMBER; k++) {
            for (i = 0; i < NUMBER -1; i++) {
                if (v[i] > v[i+1]) {
                    swap(&v[i], &v[i+1]);
                }
            }
        }
    }
    else if (m == 1){
        for (k = 0; k < NUMBER; k++) {
            for (i = 0; i < NUMBER -1; i++) {
                if (v[i] < v[i+1]) {
                    swap(&v[i], &v[i+1]);
                }
            }
        }
    }

    for (i = 0; i < NUMBER; i++) {
        printf("%d ", v[i]);
    }
}

int main (void) {
    scanf("%d", &NUMBER);
    int list[NUMBER];
    scanf("%d", &n);
    
    for (int i=0; i<NUMBER; i++){
        scanf("%d", &list[i]);
    }
    
    sort_array(list, NUMBER, n);
}
