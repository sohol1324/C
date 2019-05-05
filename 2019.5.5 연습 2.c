/*입력 값의 합계를 출력하는 프로그램*/

#include <stdio.h>

int main(void)
{
	int data, sum = 0;

	printf("Enter data = ");

	while (scanf("%d", &data) == 1)
	{
		sum += data;
	}

	if (sum == 0)
	{
		return printf("No Data\n"), 1;
	}

	printf("합계 = %d\n", sum);

	return 0;

}