#include <stdio.h>
int main(void)
{
	float wangsu;
	float wenjiandaxiao;

	printf("请输入当前网速（单位：Mb/s)\n");
	scanf("%f", &wangsu);
	printf("请输入下载文件大小（单位：MB\n");
	scanf("%f", &wenjiandaxiao);
	printf("您的网速是%.2fMb/s，"
			"您下载的文件大小是%.2fMB,还需要下载%.2f秒\n",
			wangsu, wenjiandaxiao, wenjiandaxiao/(wangsu/8));

	return 0;
}
