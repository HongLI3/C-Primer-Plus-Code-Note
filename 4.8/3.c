#include <stdio.h>
int main(void)
{
	float fudianshu;

	printf("请输入一个浮点数:");
	scanf("%f", &fudianshu);
	printf("The input is %f or %e.\n", fudianshu, fudianshu);
	printf("The input is %+f ot %E.\n", fudianshu, fudianshu);

	return 0;
}
