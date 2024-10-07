#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int k=2;

	printf("Please enter a number: ");
	scanf("%d", &n);

	if (n == 1)
	{
		printf("It is not a prime number.");
		return;
	}

	for (k;k<n;k++)
	{
		if (n % k == 0)
		{
			printf("It is not a prime number.");
			return 0;
		}
	}
	printf("It is a prime number.");
	return 0;
}