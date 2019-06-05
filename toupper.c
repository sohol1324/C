/*¿¹Á¦ : toupper()
  201914023*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int c;

	while ((c = getchar()) != EOF)
	{
		if (islower(c))
		{
			c = toupper(c);
		}
		putchar(c);
	}
	return 0;
}