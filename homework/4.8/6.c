#include <stdio.h>
int main(void)
{
	char ming[40];
	char xing[40];
	int ming_kuandu;
	int xing_kuandu;

	printf("请输入您的名\n");
	scanf("%s", ming);
	printf("请输入您的姓\n");
	scanf("%s", xing);
	ming_kuandu = printf("%s", ming);
	xing_kuandu = printf(" %s\n", xing) - 2;
	printf("%*d", ming_kuandu, ming_kuandu);
	printf(" %*d\n", xing_kuandu, xing_kuandu);
	printf("%s", ming);
	printf(" %s\n", xing);
	printf("%-*d", ming_kuandu, ming_kuandu);
	printf(" %-*d\n", xing_kuandu, xing_kuandu);
	
	return 0;
}
