/*����: getchar(), putchar()
  201914023 ������*/

#include <stdio.h>

int main(void)
{
	int ch;

	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}

	return 0;
}