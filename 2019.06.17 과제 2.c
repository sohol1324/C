/*Lab: 2차원 공간 상의 점을 POINT 타입으로 정의하기
  201914023 정우진*/

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
	printf("새로운 점의 좌표는(%d, %d)입니다.\n", result.x, result.y);

	return 0;
}


POINT translate(POINT p, POINT delta)
{
	POINT new_p;

	new_p.x = p.x + delta.x;
	new_p.y = p.y + delta.y;

	return new_p;
}
