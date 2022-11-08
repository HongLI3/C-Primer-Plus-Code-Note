/*platinum.c --your weight in platinum*/
#include <stdio.h>

 int main(void)
 {
    float weight;   /*你的体重*/
    float value;    /*相等重量的白金价值*/
    printf("Ara you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your wight in pounds: ");
    /*获取用户的输入*/
    /*14.5833用于把英镑常衡盎司转换为金衡盎司*/
    scanf("%f",&weight);
    value = 1700*weight*14.5833;
    printf("Your weight in platinum is worth $%.2f.\n",value);
    printf("You ara easily worth that! If platium prices drop,\n");
    printf("eat more to  maintain your value.\n");
    getchar();
    getchar();
    return 0;
 }