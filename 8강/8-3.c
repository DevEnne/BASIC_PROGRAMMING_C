#include <stdio.h>
#define SIZE 6

int input_number() {
        int x;
        scanf("%d", &x);
        return x;
}

int main (void) {
        int i, k,num, x;
        int list[SIZE];
        
        for (i=0; i < SIZE; i++) {
                x = input_number();
                list[i] = x;
        }

        for (k = 0; k < SIZE; k++) {
                for (i = 0; i < SIZE -1; i++) {
                if (list[i] > list[i+1]) {
                        int tmp = list[i];
                        list[i] = list[i+1];
                        list[i+1] = tmp;
                }
                }
        }

        for (i=0; i < SIZE; i++) {
                printf("%d", list[i]);
        }
}
