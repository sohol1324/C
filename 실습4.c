/*�Է¹��� �� ���� ���� ������ �հ踦 ����ϴ� ���α׷�*/

#include <stdio.h>

int main(void)
{
	int a, b, i, sum = 0;

	if (scanf("%d %d", &a, &b) != 2)
	{
		return printf("Input Error\n"), 1;
	}

	if (a > b)
	{
		i = a; a = b; b = i;
	}

	for (i = a; i <= b; i++)
	{
		sum += i;
	}

	printf("%d���� %d������ �հ� = %d\n", a, b, sum);

	return 0;

}