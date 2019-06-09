/*Lab: 2차원 공간 상의 점을 구조체로 표현하기
  201914023 정우진*/

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

	printf("점의 좌표를 입력하시오(x, y): ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("점의 좌표를 입력하시오(x, y): ");
	scanf("%d %d", &p2.x, &p2.y);

	xdiff = p1.x - p2.x;
	ydiff = p1.y - p2.y;

	dist = sqrt((double)(xdiff * xdiff + ydiff * ydiff));

	printf("두 점사이의 거리는 %f입니다.\n", dist);

	return 0;
}
