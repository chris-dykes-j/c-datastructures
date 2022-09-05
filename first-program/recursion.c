#include <stdio.h>

int fun(int x) {
	static int y = 0;
	if (x > 0) {
		y++;
		return fun(x - 1) + y;
	}
	return 0;
}

int main() {
	// What number will be printed out?
	printf("%d\n", fun(5));
}
