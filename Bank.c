/*Lab : ���� ���� �����ϱ�
  201914023 ������*/

#include<stdio.h>

void save(int amount)
{
	static long balance = 0;

	if (amount >= 0)
	{
		printf("%d\t\t", amount);
	}
	else
	{
		printf("\t%d\t", -amount);
	}

	balance += amount;
	printf("%d\n", balance);
}

int main(void)
{
	int x = 0;
	printf("==============================\n");
	printf("�Ա�\t���\t�ܰ�\n");
	printf("==============================\n");
	save(10000);
	save(50000);
	save(-10000);
	save(30000);
	printf("==============================\n");

	return 0;

}