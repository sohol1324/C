/*Lab: 2���� ���� ���� ���� POINT Ÿ������ �����ϱ�
  201914023 ������*/

#include <stdio.h>

typedef struct point {
	int x;
	int y;
} POINT;

POINT translate(POINT p, POINT delta);

int main(void)
{
	POINT p = { 2, 3 };
	POINT delta = { 10, 10 };
	POINT result;

	result = translate(p, delta);
	printf("���ο� ���� ��ǥ��(%d, %d)�Դϴ�.\n", result.x, result.y);

	return 0;
}


POINT translate(POINT p, POINT delta)
{
	POINT new_p;

	new_p.x = p.x + delta.x;
	new_p.y = p.y + delta.y;

	return new_p;
}