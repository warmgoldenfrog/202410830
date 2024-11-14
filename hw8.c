#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	double numbers[5];
	double sum = 0, m, v = 0, s;
	printf("Enter 5 real numbers: ");
	for (int i=0;i<5;i++)
		scanf_s("%lf", &numbers[i]);
	
	for (int i = 0; i < 5; i++)
		sum += numbers[i];
	m = sum / 5; //평균

	for (int i = 0; i < 5; i++)
		v += pow(numbers[i] - m, 2);
	v /= 5; //분산
	s = sqrt(v); //표준편차

	printf("Standard Deviation = %.3lf", s);
	return 0;
}