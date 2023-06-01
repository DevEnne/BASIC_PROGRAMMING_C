#include <stdio.h>
#include <string.h>

int main (void) {
    char str[512];
    gets(str);
    int i;
    for(i=0; i<=strlen(str); i++){
        if (str[i] == '.' || str[i] == '?' || str[i] == '!'){
            printf("%c", str[i]);
            break;
        }
        printf("%c", str[i]);
    }
}
