/*�Է¹��� ���� ���� ������ ���*/

#include <stdio.h>

int main(void)
{
	int a, b = 0;

	if (scanf("%d %d", &a, &b) != 2)
	{
		return printf("Input Error\n"), 1;
	}
	if (a < b)
	{
		printf("%d %d\n", b, a);
	}
	else
	{
		printf("%d %d\n", a, b);
	}

	return 0;

}