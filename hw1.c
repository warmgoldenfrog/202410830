#include <stdio.h>

int main(void)
{
	int num1, num2, result1, result2, result3;

	printf("Input two integers: ");
	scanf("%d %d", &num1, &num2);

	result1 = num1 & num2;
	result2 = num1 | num2;
	result3 = num1 ^ num2;

	printf("%d & %d = %d \n", num1, num2, result1);
	printf("%d | %d = %d \n", num1, num2, result2);
	printf("%d ^ %d = %d", num1, num2, result3);
	return 0;
}

/*
2개의 정수를 입력 받아 AND, OR, XOR 한 결과를 출력하는 프로그램
->
Input two integers: 10 15
10 & 15 = 10
10 | 15 = 15
10 ^ 15 = 5
*/