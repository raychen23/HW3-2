#include <stdio.h>
#pragma warning( disable : 4996 )

int fibonacci(int i) {
	if (i == 0) {
		return 0;
	}
	if (i == 1) {
		return 1;
	}
	if (i >= 2) {
		return fibonacci(i - 2) + fibonacci(i - 1);
	}
}

int main() {
	int x;
	printf("enter the integer");
	scanf("%d", &x);
	for (int i = 0; i <= x; i++) {
		printf("%d ", fibonacci(i));
	}
	return 0;
}