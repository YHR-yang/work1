#include <stdio.h>
int main(void)
{
	int x,y,f;
	printf("G20060235 杨浩然\n");
	while (1){
	printf("请输入您的成绩：");
	scanf ("%d",&f);
	if(f>=90)
		printf("您的成绩优秀，很棒！\n");
	else if(f>=80)
		printf("您的成绩良好，还可以！\n");
	else if(f>=70)
		printf("您的成绩中等，还凑合！\n");
	else if (f>=60)
		printf("您的成绩合格，继续加油！\n");
	else 
		printf("您的成绩不合格，给我补考去！\n");
		break;	 
	} 
	return 0; 
}
