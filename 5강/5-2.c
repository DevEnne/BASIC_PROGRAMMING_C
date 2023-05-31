#include <stdio.h>

int main (void) { 
    int x,y,z;
    int middle;

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    if (x > y && x > z) {
        if(y > z) {
            middle = y;
        }
        else {
            middle = z;
        }
    }

    if (y > x && y > z) {
        if(x>z) {
            middle = x;
        }
        else {
            middle = z;
        }
    } 

    if (z > x && z > y) {
        if (x > y) {
            middle = x;
        }
        else {
            middle = y;
        }
    }

    printf("%d", middle);

}
