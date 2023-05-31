#include <stdio.h>

int main (void) {
    int a, num=2, count=0, is_prime=0;
    scanf("%d", &a);

    for ( ; ; ) {
        is_prime = 1; // 초기 설정으로 is_prime을 1로 둠.
        for (int i=2; i<num; i++) {
            if (num%i == 0) { // num과 i를 나눠 나머지가 0이라면
                is_prime = 0; // 소수가 아니기 때문에 0
            }
        }
        if (is_prime ==1) { // 소수라면
            count++;
            printf("%d  ", num);
        }
        num++;
        if(count == a) {
            break;
        }
    }
}
