/*조합을 계산하는 프로그램(recursion)
  201914023 정우진*/

#include <stdio.h>

unsigned comb();
static float result = 1;

int main(void)
{
	unsigned int n, r = 0;
	printf("n과 r의 값을 입력하세요: ");
	scanf("%d %d", &n, &r);
	if (n < r)
	{
		return printf("Error : r이 n보다 클 수 없습니다.\n"), 0;
	}
	comb(n, r);
	printf("%dC%d = %d\n", n, r, (int)result);
	return 0;
}

unsigned comb(unsigned n, unsigned r)
{
	if (r == 1)
	{
		result *= n;
		return 0;
	}
	else
	{
		result = result * n / r;
		comb(n - 1, r - 1);
	}
}
