#include <stdio.h>
#define shifenbi 60	// 小时与分钟之比
int main(void)
{
	char shurutishi[60] = "请输入时间（单位：分钟）";
	int shijian = 1;
	int xiaoshi;
	int fenzhong;
	while (shijian > 0)
	{
		printf("%s", shurutishi);
		printf("\n若要退出请输入小于等于0的数\n");
		scanf("%d", &shijian);
		printf("%d分钟`等于", shijian);
		xiaoshi = shijian / shifenbi;
		printf("%d小时", xiaoshi);
		fenzhong = shijian - xiaoshi * 60;
		printf("%d分钟\n", fenzhong);
	}

	return 0;
}
