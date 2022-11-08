//2.12.2.c --将年龄转换为天数，不考虑闰年
#include <stdio.h>

int main(void)
{
	int year;
	int day;
	
	year = 19;
	day = 365*year;
	printf("%d",day);
	
	getchar();
	return 0;
	
}
	