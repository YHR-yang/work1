#include <stdio.h>
int main(void){
/*
	//闰年是400的倍数或者是4的倍数但不是100的倍速
	int year;
	printf("请输入年份：");
	scanf("%d",&year);
	if(year%400==0|| year%4==0&& year%100!=0)
		printf("该年份为闰年\n");
	else 
		printf("该年非闰年\n");
*/

	//输入4个任意整数，从小到大排序
/*	int a,b,c,d;
	printf("请输入4位整数:");
	scanf("%d  %d  %d  %d",&a,&b,&c,&d);
	if(a>b)
	{
	 int t;
	 t=a;
	 a=b;
	 b=t;
	} 
	if(b>c)
	{
		int t;
		t=b;
		b=c;
		d=t;
	}
	if(c>d){
		int t;
		t=c;
		c=d;
		d=t;
	}
	if(a>b)
	{
		int t;
		t=a;
		a=b;
		b=t;
	}
	if(b>c)
	{
		int t;
		t=b;
		b=c;
		c=t;
	}
	if(a>b)
	{
		int t;
		t=a;
		a=b;
		b=t;
	}
	printf("四位整数的大小顺序:");
	printf("%d   %d  %d   %d   ",a,b,c,d);
*/
/*
	//计算邮费
	int x,y;
	char yn;
	printf("请输入2个物体的体重(单位/克):");
	scanf("%d %c",&x,&y);
	
	if(x<=1000)
		y=8;
	else 
	{
		y=8+(x-1000)/500-4;
		if((x-100)&500!=0) y+=4;
	}
	if(yn=='y') y+=5;
	printf("%d",y);
	
*/

	//输入字符
	
	char ch;
	printf("请输入一个字符: ");
	scanf("&c",&ch);
	if(ch>='a'&&'z'||ch>='A'&&ch<='Z')
		printf("%d\n",ch);
	else if(ch>='0'&&ch<='9')
		printf("%c\n",ch);
	else 
		printf("输入有误\n");
	return 0;
}
