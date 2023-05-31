#include <stdio.h>

int main (void) { 
    int input_num;
    int i;

    scanf("%d", &input_num);
    printf("1");
    for(i=1; i <=input_num; i++) {
        printf("*%d", i);
    }
}
