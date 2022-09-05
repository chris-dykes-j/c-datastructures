#include <stdio.h>
#include <stdbool.h>

bool is_prime(int x) {
	if (x == 0 || x == 1)
		return false;
	for (int i = 2; i <= x / 2; i++)
		if (x % i == 0)
			return false;
	return true;
}

int main() {
	printf("%s\n", is_prime(21) ? "true" : "false"); // Is false.
	printf("%s\n", is_prime(23) ? "true" : "false"); // Is true.
}
