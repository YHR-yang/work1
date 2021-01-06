#include <stdio.h>
int main (void){
	int x,y,f;
	printf("G20060235 杨浩然\n");
	while (1)
	{
		printf("请输入成绩：");
		scanf("%d",&f);
		switch(f/10)
		{
			case 10:
			case 9: printf("成绩优秀！\n");    			break;
			case 8: printf("成绩良好！加油\n");			break;
			case 7: printf("成绩比较好！继续加油！\n");	break;
			case 6: printf("成绩合格！多多学习\n");		break;
			default: printf("不及格！给我补考去	\n"); 
		}
	}
	return 0; 
} 
