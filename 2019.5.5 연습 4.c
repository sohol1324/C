/*�Է� �� �� �ִ밪�� ����ϴ� ���α׷�*/

#include <stdio.h>

int main(void)
{
	int data, i = 0;

	printf("Enter Data = ");

	while (scanf("%d", &data) == 1)
	{
		if (data > i)
		{
			i = data;
		}
	}

	if (!i)
	{
		return printf("No Data\n"), 1;
	}

	printf("�ִ밪 = %d\n", i);

	return 0;

}