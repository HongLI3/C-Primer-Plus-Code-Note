#include<stdio.h>
int main(void)
{
	int shuzi;
	int cishu = 0;	//循环次数

	printf("请输入一个整数\n");
	scanf("%d", &shuzi);
	while (cishu < 11)
	{
		printf("%d\n", shuzi);
		shuzi ++;
		cishu ++;
	}
	return 0;
}
