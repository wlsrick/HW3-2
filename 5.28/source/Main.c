#include <stdio.h>
#include <stdlib.h>

int main() {
	char a;
	printf("Please enter an English alphabet:");
	scanf_s("%c", &a);
	a += 32;
	printf("%c", a);
	printf("\n");
	system("pause");
	return 0;
}