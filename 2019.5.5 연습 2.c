/*�Է� ���� �հ踦 ����ϴ� ���α׷�*/

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

	printf("�հ� = %d\n", sum);

	return 0;

}