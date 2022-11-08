#include<stdio.h>
int main(void)
{
	const float yingcun = 2.54;	//1厘米等于0.394英寸
	const float yingchi = 30.48;	//1厘米等于0.0328英尺
	int feet;	//英尺
	float inches;	//英寸
	float height;	//身高CM

	printf("Enter a height in centimeters:");
	scanf("%f", &height);
	while (height > 0)
	{
		feet = height / yingchi;
		inches = ( height - feet * yingchi ) / yingcun;
		printf("%.1f cm = %d feet, %.1f inches", height, feet, inches);
		printf("\nEnter a height in centimeters (<=0 mto quit):");
		scanf("%f", &height);
	}
	printf("bye\n");

	return 0;
}
