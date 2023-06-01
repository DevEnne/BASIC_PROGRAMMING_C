#include <stdio.h>
#include <math.h>
#define NUMBER 5

int v[NUMBER];
double answer;
double data, data2, bunsan, puncha;

double get_array_sum(int *v, int n){
    for (int i =0; i<NUMBER; i++){
        answer = answer + v[i];
    }
    answer = answer / NUMBER;
    return answer;
}

double get_array_std(int *v, double svg, int n){
    for (int i = 0; i<NUMBER; i++){
        double pun = svg - v[i];
        data = pow(pun, 2);
        data2 = data2 + data;
    }
    bunsan = data2 / NUMBER;
    puncha = sqrt(bunsan);
    return puncha;
}

int main (void) {
    int i, num;
    for (i=0; i<NUMBER; i++){
        scanf("%d", &v[i]);
    }
    
    get_array_sum(v, 5);
    get_array_std(v, answer, 5);

    printf("%.2lf", answer);
    printf("%.2lf", puncha);
}
