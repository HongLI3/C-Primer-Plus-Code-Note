#include<stdio.h>
int main(void)
{
	int day = 1;

	while (day > 0)
	{
		printf("请输入天数\n");
		scanf("%d", &day);
		printf("%d days %d weeks, %d days.\n", day, day / 7, day - day / 7 *7 );
	}

	return 0;
}
