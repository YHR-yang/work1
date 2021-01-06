#include <stdio.h>
int main(void)
{
	int a,b,c,max;
	printf("请输入成绩a:");
	scanf("%d",&a);
	printf("请输入成绩b:");
	scanf("%d",&b);
	if(a>b)
	   c=a-b;
	else
	   c=b-a;
	printf("2个成绩差为：%d	\n",c);
	printf("G20060235 杨浩然");
	return 0;
} 
