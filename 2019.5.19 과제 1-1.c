#include <stdio.h>

unsigned random_i(void);
double random_f(void);

extern unsigned call_count;

int main(void)
{
	register int i = 0;
	
	for (i = 0; i < 10; i++)
	{
		printf("%d", random_i());
	}

	printf("\n");

	for (i = 0; i < 10; i++)
	{
		printf("%f", random_f());
	}

	printf("\nÇÔ¼ö°¡ È£ÃâµÈ È½¼ö = %d\n", call_count);

	return 0;
}

