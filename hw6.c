#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int arr[5];
	int i;
	int odd[5], even[5];
	int oddn = 0, evenn = 0;

	printf("Please input five integers : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 0)
		{
			even[evenn] = arr[i];
			evenn++;
		}
		else
		{
			odd[oddn] = arr[i];
			oddn++;
		}
	}
	printf("\n");
	printf("Odd numbers: ");
	for (i = 0; i < oddn; i++)
		printf("%d ", odd[i]);

	printf("\n");
	printf("Even numbers: ");
	for (i = 0; i < evenn; i++)
		printf("%d ", even[i]);

	return 0;
}