#include <stdio.h>
#include <math.h>

int main (void) { 
    double x,y;

    scanf("%lf", &x);

    y = 3.0 * pow(x, 3) - 7.0 *pow(x, 2) + 9;

    printf("%.2lf", y);
}
