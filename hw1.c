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
2���� ������ �Է� �޾� AND, OR, XOR �� ����� ����ϴ� ���α׷�
->
Input two integers: 10 15
10 & 15 = 10
10 | 15 = 15
10 ^ 15 = 5
*/