/*예제: 배열이 함수의 인자인 경우
  201914023 정우진*/

#include <stdio.h>
#define SIZE 7

void square_array(int a[], int size);
void print_array(int a[], int size);

int main(void)
{
	int list[SIZE] = { 1,2,3,4,5,6,7 };

	print_array(list, SIZE);
	square_array(list, SIZE);
	print_array(list, SIZE);

	return 0;
}

void square_array(int a[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		a[i] = a[i] * a[i];
	}
}

void print_array(int a[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%3d", a[i]);
	}
	printf("\n");
}
