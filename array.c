/*�迭�� �������� ����ϴ� ���α׷�
  201914023 ������*/

#include <stdio.h>

int main(void)
{
	int a[5];

	for (int x = 0; x < 5; x++)
	{
		scanf("%d", &a[x]);
	}

	printf("�迭�� �������� ���\n");

	for (int i = 4; i >= 0; i--)
	{
		printf("%d ", a[i]);
	}

	printf("\n");

	return 0;
}