#include <stdio.h>
#include <stdint.h>
int main(void)
{
	int8_t a = 1234342343423434234342343423434234342343423434234342343423434234342343423434234342343423434234342343423434234342343423434234342343423434234342343423434234342343428;
	float b = 1e128;
	double c = -0x1p4234;
	printf("%d\n%f\n%f\n", a, b, c);
	getchar();

	return 0;
}
