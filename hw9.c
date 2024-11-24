#include <stdio.h>
#include <string.h>

int swap_case(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('a' - 'A');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + ('a' - 'A');
		i++;
	}
}

int main(void)
{
	char str[100];
	printf("Input> ");
	fgets(str, sizeof(str), stdin);
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';
	swap_case(str);
	printf("Output> %s\n", str);

	return 0;
}