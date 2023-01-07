#include <stdio.h>

int main(void)
{
	unsigned int number;
	char string[10];

	printf("Enter a number in hexadecimal please: ");
	scanf("%x", &number);
	printf("Enter the same number again: ");
	scanf("%s", string);
	printf("Integer is %i and the string is %s\n", number, string);

	return 0;
}
