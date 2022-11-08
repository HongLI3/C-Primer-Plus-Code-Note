#include <stdio.h>
int main(void)
{
    char xing[40];
    char ming[40];

    printf("请输入姓");
    scanf("%s", xing);
    printf("%s", xing);
    printf("请输入名");
    scanf("%s", ming);
    printf("%s", xing);
    printf("你的名，姓是%s%s", ming, xing);

    return 0;
}