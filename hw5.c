#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void change(int n);
int main()
{
	int n;
	printf("Please enter a number: ");
	scanf("%d", &n);

	if (n == 0)
		printf("0");
	else
		change(n);
	return 0;
}

void change(int n)
{
	if (n == 0)
		return;
	change(n / 2);
	printf("%d", n % 2);
}