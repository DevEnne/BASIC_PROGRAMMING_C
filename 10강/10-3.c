#include <stdio.h>
#include <string.h>

int main (void) {
    char str[10][30], find[30];
    int count = 0;
    for (int i =0; i<10; i++){
        scanf("%s", str[i]);
    }
    printf("Find: ");
    scanf("%s", find);

    for (int i=0; i<10; i++){
        if(strcmp(str[i], find) == 0){
            count++;
        }
    }
    printf("%d number of %s", count, find);
}
