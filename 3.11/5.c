#include <stdio.h>
int main(void)
{
	int  a;
	double b;
	printf("你的岁数：");
	scanf("%d", &a);
	b = a*3.156e7;
	printf("你活了多少秒：%lf", b);

	return 0;
}
