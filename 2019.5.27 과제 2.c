/*예제: 포인터의 형변환
  201914023 정우진*/

#include <stdio.h>

int main(void)
{
	int data = 0x0A0B0C0D;
	char *pc;
	pc = (char *)&data;

	for (int i = 0; i < 4; i++) 
	{
		printf("*(pc + %d) = % 02X \n", i, *(pc + i));
	}
	return 0;
}
