#include <stdio.h>
int main(void)
{
	float a;
	double b;
	printf("请输入水的重量：(夸脱)\b\b\b\b");
	scanf("%f", &a);
	b = a*3.0e-23*950;
	printf("%f夸脱里含有的水分子的数量大约是：%e", a, b);

	return 0;
}
