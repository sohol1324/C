/*예제: 합계 계산 함수 (포인터 버전)
  201914023 정우진*/

#include <stdio.h>

int get_sum(const int *p, int n);

int main() {
	int a[] = { 10, 20, 30, 40, 50 };
	printf("sum = %d ", get_sum(a, sizeof a / sizeof a[0]));
	return 0;
}

int get_sum(const int *p, int n) {
	const int *end = p + n;
	int sum = 0;

	while (p < end)
		sum += *p++;

	return sum;
}
