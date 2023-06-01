#include <stdio.h>
#define NUMBER 5

int list[NUMBER];
int answer;

int get_arry_sum(int *A, int size){
    for (int i =0; i<NUMBER; i++){
        answer = answer + A[i];
    }
    return answer;
}

int main (void) {
    int i, num;
    for (i=0; i<NUMBER; i++){
        scanf("%d", &list[i]);
    }
    get_arry_sum(list, 5);

    printf("%d", answer);
}
