#include <stdio.h>

int main(void)
{
	double num_km;
	double num_mile;
	
	printf("Please enter kilometers: ");
	scanf("%lf", &num_km);
	num_mile = num_km / 1.609;
	printf("%.1lf km is equal to %.1lf miles.", num_km, num_mile);
	return 0;
}