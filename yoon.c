#include <stdio.h>

int in (void)
{
	int i = 0;
	printf("¿¬»ê ÀÔ·Â(1.µ¡¼À, 2.»¬¼À, 3.°ö¼À, 4.³ª´°¼À, 0.Á¾·á)");
	scanf("%d", &i);
	return i;
}

int num(void)
{
	int num;
	scanf("%d", &num);
	return num;
}

void showresult(int result)
{
	printf("°á°ú: %d\n", result);
}


int add(int num1, int num2)
{
	return num1 + num2;
}

int subtraction(int num1, int num2)
{
	return num1 - num2;
}

int multiply(int num1, int num2)
{
	return num1 * num2;
}

int dividing(int num1, int num2)
{
	return num1 / num2;
}


int main(void)
{
	int i = 1;
	int num1, num2 = 0;
	int result = 0;
	
	while (1)
	{
		i = in();
		if (i <= 0 || i >= 5)
		{
			break;
		}
		printf("µÎ Á¤¼ö ÀÔ·Â: ");
		num1 = num();
		num2 = num();

		if (i == 1)
		{
			result = add(num1, num2);
		}
		if (i == 2)
		{
			result = subtraction(num1, num2);
		}
		if (i == 3)
		{
			result = multiply(num1, num2);
		}
		if (i == 4)
		{
			result = dividing(num1, num2);
		}
		showresult(result);
	}
	return 0;
}