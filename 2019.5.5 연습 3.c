/*�Է� ���� ����� ����ϴ� ���α׷�*/

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

	printf("��� = %lf\n", (double)sum / n);

	return 0;

}