/*입력 값 중 최대값을 출력하는 프로그램*/

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

	printf("최대값 = %d\n", i);

	return 0;

}