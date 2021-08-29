#include <stdio.h>

int main(void)
{
	unsigned int number;
	printf("Input value: ");
	scanf("%u", &number);

	number % 2 == 0 ? printf("%d is an even number\n", number) : printf("%d is not an even number\n", number);
}