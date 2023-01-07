#include <stdio.h>

int main(void) {
	unsigned int decimal;
	unsigned int hex;

	printf("Enter a hexadecimal: ");
	scanf("%x", &decimal);
	printf("Decimal is %u\n", decimal);

	printf("Cool. Now enter a decimal: ");
	scanf("%u", &hex);
	printf("Hexidecimal is %x\n", hex);

	return 0;
}
