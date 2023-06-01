#include <stdio.h>
#define NUMBER 5

int main (void) {
	int i,k;
	int list[NUMBER];
	int *p;
	int answer;
	
	for (i=0; i<NUMBER; i++){
		scanf("%d", &list[i]);
	}

	p = list;
	
	for (i=NUMBER; i>=1; i--){
		printf("%d  ", p[i-1]);
	}

}
