#include <stdio.h>

int main(void)
{
	int r, c, p;
	int n = 5;

	for (r = 1; r < n; r++)
	{
		for (p = 1; p < n - r; p++)
			printf(" ");
		for (c = 1; c < 2 * r - 1; c++)
			printf("*");
		printf("\n");
	}
	return 0;
}