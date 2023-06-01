#include <stdio.h>
#include <string.h>

#define size 512

int main() {
	char list[size][size];
	int i = 0;

	for (;;) {
		scanf("%s", list[i]);
		if (list[i][strlen(list[i]) - 1] == '.') {
			list[i][strlen(list[i]) - 1] = '\0';
			strcat(list[0], ".");
			break;
		}
		i++;
	}
	for (int j = i; j >= 0; j--) {
		printf("%s ", list[j]);
	}
}
