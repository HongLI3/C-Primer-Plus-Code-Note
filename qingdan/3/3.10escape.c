/* escape.c -- 使用转移序列 */
#include <stdio.h>
int main(void)
{
	float salary;

	printf("\aEnter your desired montyly salary:");	/* 1 */
	printf(" $_______\b\b\b\b\b\b\b");				/* 2 */
	scanf("%f", &salary);
	printf("\n\t$%.2f a montf is $%.2f a year.", salary,
			salary * 12.0);							/* 3 */
	printf("\rGee!\n");

	return 0;
}


