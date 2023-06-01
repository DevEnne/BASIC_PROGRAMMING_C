#include <stdio.h>

typedef struct {
    float num_1;
    float num_2;
} s1;

int main() {
    s1 c1, c2;
    char middle_1, middle_2;
    scanf("%f%c%fi", &c1.num_1, &middle_1, &c1.num_2);
    scanf("%f%c%fi", &c2.num_1, &middle_2, &c2.num_2);
     
    if (middle_1 == '-') {
      c1.num_2 = -c1.num_2;
    }
    
    if (middle_2 == '-') {
      c2.num_2 = -c2.num_2;
    }
    
    
    if (c1.num_2+c2.num_2 > 0) {
      printf("%.2f+%.2fi\n", c1.num_1+c2.num_1, c1.num_2+c2.num_2);
    } else {
      printf("%.2f%.2fi\n", c1.num_1+c2.num_1, c1.num_2+c2.num_2);
    }
    
    return 0;
}
