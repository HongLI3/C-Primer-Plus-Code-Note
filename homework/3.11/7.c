#include <stdio.h>
int main(void)
{
	float a;
	printf("输入你的身高（英尺）: ");
	scanf("%f", &a);
	a = a*2.54;
	printf("你的身高是 %f 厘米", a);

	return 0;
}
