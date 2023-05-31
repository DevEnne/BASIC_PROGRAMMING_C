#include<stdio.h>
#define num 99

int main() {
   int x, m, i, j, result,d;

   scanf("%d", &x);

   int a[num][num];

   m = 0;
   result = 0;

   for (i = 0; i < x; i++) {
      for (j = 0; j < x; j++) {
         m++;
         a[i][j] = m;
      }
   }

   for (d = 0; d < x; d++) {

      result += a[d][d];
   }

   printf("%d", result);
}
