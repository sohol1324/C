/*예제: getchar(), putchar()
  201914023 정우진*/

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