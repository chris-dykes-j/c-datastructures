#include <stdio.h>

int fun(int x) {
	static int y = 0;
	if (x > 0) {
		y++;
		return fun(x - 1) + y;
	}
	return 0;
}

int factorial(int x) {
	if (x == 1)
		return 1;
	else
		return x * factorial(x - 1);
}

int main() {
	// What number will be printed out?
	printf("%d\n", fun(5));
	
	// Factorial test; should be 120.
	printf("%d\n", factorial(5));
}
