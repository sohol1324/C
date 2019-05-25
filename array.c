/*배열을 역순으로 출력하는 프로그램
  201914023 정우진*/

#include <stdio.h>

int main(void)
{
	int a[5];

	for (int x = 0; x < 5; x++)
	{
		scanf("%d", &a[x]);
	}

	printf("배열을 역순으로 출력\n");

	for (int i = 4; i >= 0; i--)
	{
		printf("%d ", a[i]);
	}

	printf("\n");

	return 0;
}