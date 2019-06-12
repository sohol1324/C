/*두 정수를 입력받아 최대 공약수를 구하는 프로그램*/

#include <stdio.h>

int n_input()
{
	int x = 0;
	printf("정수를 입력하세요: ");
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
	printf("%d와 %d의 최대공약수는 %d입니다.\n", x, y, result);
	return 0;
}

