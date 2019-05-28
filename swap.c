/*예제: swap 함수
  201914023 정우진*/

#include <stdio.h>

void swap(int *px, int *py)
{
	int tmp;

	tmp = *px;
	*px = *py;
	*py = tmp;

}

int main(void)
{
	int a = 100, b = 200;
	printf("a = %d b = %d\n", a, b);

	swap(&a, &b);

	printf("a = %d b = %d\n", a, b);
	return 0;
}