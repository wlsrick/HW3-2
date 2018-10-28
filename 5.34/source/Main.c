#include <stdio.h>
#include <stdlib.h>
int power(int x, int y);
int main() {
	int a, b;
	printf("Please enter two number for base and exponent:");
	scanf_s("%d %d", &a, &b);
	printf("%d\n", power(a, b));
	system("pause");
	return 0;
}
int power(int x, int y) {
	int s=1;
	for (int i = 1;i <= y;i++) {
		
		s = s * x;
	}
	return s;
}