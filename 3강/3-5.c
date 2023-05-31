#include <stdio.h>

int main (void) { 
    char c;

    c = getchar();

    printf("%d", (int)c % 17);
}
