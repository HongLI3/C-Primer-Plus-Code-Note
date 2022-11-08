#include <stdio.h>
#include <float.h>
int main(void)
{
	float shu1 = 1.0/3.0;
	double shu2 = 1.0/3.0;

	printf("FLT_DIG:%d ", FLT_DIG);
	printf("DBL_DIG:%d\n", DBL_DIG);
	printf("float %.6f ", shu1);
	printf("%.12f ", shu1);
	printf("%.16f\n", shu1);
	printf("double %.6f ", shu2);
	printf("%.12f ", shu2);
	printf("%.16f\n", shu2);
	
	return 0;
}
