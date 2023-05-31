#include <stdio.h>

int main() {
   int x, a[10], big, index, i, j;

   for (i = 0; i < 10; i++) {
      scanf("%d", &a[i]);
   }

   big = 0;

   for (j = 0; j < 10; j++) {
      if (big < a[j]) {
         big = a[j];
         index = j;
      }
   }

   printf("%d", index);
}
