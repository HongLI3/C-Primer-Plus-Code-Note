#include <stdio.h>
int main(void)
{
	float shenggao;
	char name[40];

	printf("您好，请输入您的姓名：\n");
	scanf("%s", name);
	printf("请输入您的身高(单位：厘米)\n");
	scanf("%f", &shenggao);
	shenggao = shenggao/100;
	printf("您好，%s。您的身高是%1.3f米\n", name, shenggao);

	return 0;
}
