#include <stdio.h>
#define num 9

int main() {
   int result, k, x, j, i, a[num][num];

   for (i = 0; i < num; i++) {
      for (j = 0; j < num; j++) {
         a[i][j] = (i + 1) * (j + 1);
      }
   }


   scanf("%d", &x);


   for (k = 0; k < num; k++) {
      printf("%d X %d = %d\n", x, k + 1, a[x - 1][k]);
   }
}
