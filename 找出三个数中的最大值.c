#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c;
	int max;
	printf("请输入三个整数：");
	scanf("%d %d %d", &a, &b, &c);
	max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	printf("最大值是：%d\n", max);
	return 0;
}