#include <stdio.h>
int main(void)
{
	float  a;
	printf("Enter a floating-point value: ");
	scanf("%f", &a);
	printf("fixed-point notation: %f\n", a);
	printf("exponential notation: %e\np notation: %a", a, a);

	return 0;
}
