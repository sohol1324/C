/*두 개의 값을 받아 작은 값부터 출력하는 프로그램*/

#include <stdio.h>

int main(void)
{
	int a, b, t = 0;

	if (scanf("%d %d", &a, &b) != 2)
	{
		return printf("Input Error\n"), 1;
	}
	
	if (a > b)
	{
		t = a; a = b; b = t;
	}

	printf("%d %d\n", a, b);

	return 0;

}