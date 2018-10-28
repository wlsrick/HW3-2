#include<stdio.h>
#include<stdlib.h>

int main() {
	int a, b, c;
	printf("Please enter two integers:");
	scanf_s("%d %d", &a,&b);
	c = a * b;
	if ((a%b == 0) || (b%a == 0)) {
		if (a >= b) {
			c = a;
		}
		else {
			c = b;
		}
	}
	printf("LCM is:%d\n", c);
	system("pause");
	return 0;
}