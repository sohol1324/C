/*¿¹Á¦: swap ÇÔ¼ö
  201914023 Á¤¿ìÁø*/

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
