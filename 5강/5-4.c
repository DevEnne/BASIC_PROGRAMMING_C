#include <stdio.h>

int main (void) { 
    char c;
    c = getchar();

    if ((int)c >= 65 && (int)c <= 90) {
        printf("대문자");
    }
    else if ((int)c >= 97 && (int)c <= 122 ) {
        printf("소문자");
    }
    else {
        printf("영문자 아님");
    }

}
