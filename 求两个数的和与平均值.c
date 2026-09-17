#include <stdio.h>
int main() {
	int a, b;
	int sum;
	float avg;
	scanf_s("%d %d", &a, &b);
	sum = a + b;
	avg = (float)sum / 2;
	printf("和：%d\n",sum);
	printf("平均值：%.2f\n", avg);
	return 0;
}