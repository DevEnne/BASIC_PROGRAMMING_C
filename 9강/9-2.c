#include <stdio.h>
#define NUMBER 5

int main (void) {
	int i;
	int list[NUMBER];
	int *p;
	int answer;
	
	for (i=0; i<NUMBER; i++){
		scanf("%d", &list[i]);
	}

	p = list;
	answer = 0;
	for(i=0; i<NUMBER; i++){
		answer = answer + p[i];
	}

	printf("%d", answer);

}
