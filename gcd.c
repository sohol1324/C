/*�� ������ �Է¹޾� �ִ� ������� ���ϴ� ���α׷�*/

#include <stdio.h>

int n_input()
{
	int x = 0;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &x);
	return x;
}

int n_cul(int x, int y)
{
	int t = 0;
	if (x < y)
	{
		t = x;
		x = y;
		y = t;
	}

	if (y == 0)
	{
		return x;
	}
	else
	{
		return n_cul(y, x % y);
	}
}

int main(void)
{
	int x, y, result = 0;
	x = n_input();
	y = n_input();
	result = n_cul(x, y);
	printf("%d�� %d�� �ִ������� %d�Դϴ�.\n", x, y, result);
	return 0;
}

