#include <stdio.h>

int check_prime() {
        int x;
        scanf("%d", &x);
        return x;
}

int main (void) {
        int x;
        x = check_prime();

        int i,k, correct;
        int number = 2;
        for (i=1; i<x; i++) {
                correct = 1; 
                for (int i=2; i<number; i++) { 
                        if (number%i == 0) { 
                        correct = 0;
                        }
                }
                if (correct ==1){
                        printf("%d", number);
                }
                number++;
        }
}
