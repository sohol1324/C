/*Lab: 2���� ���� ���� ���� ����ü�� ǥ���ϱ�
  201914023 ������*/

#include <stdio.h>
#include <math.h>

struct point
{
	int x;
	int y;
};

int main(void)
{
	struct point p1, p2;
	int xdiff, ydiff = 0;
	double dist = 0;

	printf("���� ��ǥ�� �Է��Ͻÿ�(x, y): ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("���� ��ǥ�� �Է��Ͻÿ�(x, y): ");
	scanf("%d %d", &p2.x, &p2.y);

	xdiff = p1.x - p2.x;
	ydiff = p1.y - p2.y;

	dist = sqrt((double)(xdiff * xdiff + ydiff * ydiff));

	printf("�� �������� �Ÿ��� %f�Դϴ�.\n", dist);

	return 0;
}