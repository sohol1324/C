/*입력받은 두 정수 사이 구간의 합계를 출력하는 프로그램*/

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

	printf("%d부터 %d까지의 합계 = %d\n", a, b, sum);

	return 0;

}