#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned long k[60];
	int b,c;
	printf("Please enter the Fibonacci of numbers:");
	scanf_s("%d", &b);
	k[1] = 0;
	k[2] = 1;
	for (c = 1;c <= b;c++) {
		if (c == 1) {
			printf("0,");
		}
		else if (c == 2) {
			printf("1,");
		}
		else {
			k[c] = k[c - 1] + k[c - 2];
			printf("%lu,",k[c]);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}