/*������ ����ϴ� ���α׷�(recursion)
  201914023 ������*/

#include <stdio.h>

unsigned comb();
static float result = 1;

int main(void)
{
	unsigned int n, r = 0;
	printf("n�� r�� ���� �Է��ϼ���: ");
	scanf("%d %d", &n, &r);
	if (n < r)
	{
		return printf("Error : r�� n���� Ŭ �� �����ϴ�.\n"), 0;
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
