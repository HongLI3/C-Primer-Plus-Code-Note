#include <stdio.h>
int main(void)
{
	float a;
	float b;
	float c;
	float d;
	float e;
	printf("输入你的杯数：");
	scanf("%f", &a);
	b = a/2;
	printf("品托数：%f", b);
	c = a*8;
	printf("盎司数：%f", c);
	d = c*2;
	printf("汤勺数：%f", d);
	e = d*3;
	printf("茶勺数：%f", e);

	return 0;
}
