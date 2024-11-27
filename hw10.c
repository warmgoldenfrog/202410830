#include <stdio.h>

struct information
{
	char name[20];
	char country[20];
	char population[20];
};

int main(void)
{
	struct information arr[3];
	printf("Input three cities: \n");
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("Name> ");
		fgets(arr[i].name, sizeof(arr[i].name), stdin);
		arr[i].name[strcspn(arr[i].name, "\n")] = '\0';
		printf("Country> ");
		fgets(arr[i].country, sizeof(arr[i].country), stdin);
		arr[i].country[strcspn(arr[i].country, "\n")] = '\0';
		printf("Population> ");
		fgets(arr[i].population, sizeof(arr[i].population), stdin);
		arr[i].population[strcspn(arr[i].population, "\n")] = '\0';
	}
	printf("Printing the three cities: \n");
	for (i = 0; i < 3; i++)
	{
		printf("%d. %s in %s with a population of %s people \n",
			i+1, arr[i].name, arr[i].country, arr[i].population);
	}
	return 0;
}