#include <stdio.h>

int main () {
    int student, i;
    int all_score = 0;

    scanf("%d", &student);
    int exam[student];
    
    for (i=0; i<student; i++) {
        scanf("%d", &exam[i]);

        all_score = all_score + exam[i];
    }

    printf("%d", all_score / student);
    
}
