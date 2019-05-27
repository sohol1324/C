/*예제: 간접 참조 연산자와 증감 연산자
  201914023 정우진*/

#include <stdio.h>

int main(void)
{
	int i = 10;
	int *pi = &i;

	printf("i = %d,  pi = %p\n", i, pi);
	(*pi)++;
	printf("i = %d,  pi = %p\n", i, pi);

	printf("i = %d,  pi = %p\n", i, pi);
	*pi++;
	printf("i = %d,  pi = %p\n", i, pi);

	return 0;
}