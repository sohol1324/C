/*����: 2���� �迭�� �Լ��� �����ϴ� ���α׷�
  201914023 ������*/

#include <stdio.h>

#define  YEARS 		3
#define  PRODUCTS 	5

int sum(int grade[][PRODUCTS]);

int main(void)
{
	int sales[YEARS][PRODUCTS] = { { 1, 2, 3 },{ 4, 5, 6 },{ 7, 8, 9 } };
	int total_sale = 1;

	total_sale = sum(sales);
	printf("�Ѹ����� %d�Դϴ�.\n", total_sale);

	return 0;
}

int sum(int grade[][PRODUCTS])
{
	int y, p = 1;
	int total = 0;

	for (y = 0; y < YEARS; y++)
	{
		for (p = 0; p < PRODUCTS; p++)
		{
			total += grade[y][p];
		}
	}
	return total;
}