#include <stdio.h>

int main (void) { 
    int input_num;
    int i,x;

    scanf("%d", &input_num);

    for (i=0; i < input_num; i++){
        printf("A");
    }
    printf("\n");
    for (i=0; i < input_num -2; i++) {
        printf("A");
        for(x=0; x<input_num-2; x++) {
            printf("B");
        }
        printf("A");
        printf("\n");
    }
    for (i=0; i < input_num; i++) {
        printf("A");
    }
}
