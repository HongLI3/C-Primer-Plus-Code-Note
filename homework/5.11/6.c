#include<stdio.h>
int main(void)
{
	int sum, day, tianshu;

	day = 1;
	sum = 0;
	printf("请输入工作天数\n");
	scanf("%d", &tianshu);
	while (day++ < tianshu)
	{
		sum = sum + day;
	}
	printf("sum = %d\n", sum);

	return 0;
}
