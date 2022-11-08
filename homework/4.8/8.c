#include <stdio.h>
int main(void)
{
	const float sheng = 3.785;	//1加仑等于3.785升
	const float gongli = 1.609;	//1英里等于1.69千米 
	float licheng, qiyouliang;

	printf("请输入您的里程（单位：英里）\n");
	scanf("%f", &licheng);
	printf("请输入您的耗油量（单位：加仑）\n");
	scanf("%f", &qiyouliang);
	printf("您的里程是%.1f公里，消耗%.1f升\n",
			licheng * gongli, qiyouliang * sheng);

	return 0;
}
