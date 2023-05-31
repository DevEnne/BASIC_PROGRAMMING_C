#include <stdio.h>
#include <math.h>

int main (void) { 
    double answer, py = 3.14;
    double ban, gak;
    
    scanf("%lf", &ban);
    scanf("%lf", &gak);

    answer = py*pow(ban, 2) * gak/360;
    printf("%.2lf", answer);


}
