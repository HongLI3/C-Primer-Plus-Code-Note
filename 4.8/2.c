#include <stdio.h>
int main(void)
{
	int zichang;
	char name[40];

	printf("请输入您的名字\n");
	scanf("%s", name);
	zichang = printf("\"%s\"\n", name);
	zichang = zichang - 3;
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	printf("%*s\n", zichang+3, name);

	return 0;
}
