/*예제: gets_s(), puts()
  201914023 정우진*/

#include <stdio.h>

int main(void)
{
	char name[100];
	char address[100];
	printf("이름을 입력하시오: ");
	gets_s(name, 100);
	printf("현재 거주하는 주소를 입력하시오: ");
	gets_s(address, 100);
	puts(name);
	puts(address);
	return 0;
}
