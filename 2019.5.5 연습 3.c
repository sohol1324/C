/*입력 값의 평균을 출력하는 프로그램*/

#include <stdio.h>

int main(void)
{
	int data, n = 0;
	double sum = 0;

	printf("Enter Data = ");

	while (scanf("%d", &data) == 1)
	{
		sum += data;
		n++;
	}

	if (!n)
	{
		return printf("No Data\n"), 1;
	}

	printf("평균 = %lf\n", (double)sum / n);

	return 0;

}