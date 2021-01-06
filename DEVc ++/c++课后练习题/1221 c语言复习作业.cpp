/*
*G20060235 杨浩然
*/ 

/*1.已知一个英文字符，编写一个c程序，
*在屏幕上显示出其前后相连的三个字符 
*/
/* 
#include <stdio.h>
int main(void)
{
	char x,y;
	char ch='c';
	x='c'+1;
	y='c'-1;
	printf("%c %c %c",y,ch,x);
	return 0;
}
*/

//2.编写一个程序，从键盘输入2个整数x，y。将x和y的值进行交换
/*	
#include <stdio.h>
int main(void)
{
	int x,y,t;
	printf("请输入2个数字：\n");
	scanf("%d %d",&x,&y);	
		t=x;
		x=y;
		y=t;
	printf("交换后的数字是：%d %d",x,y);
	return 0;
}
*/

//3.由键盘输入三个数，计算以这三个数为边长的三角形的面积

/* 
#include <stdio.h>
#include <math.h>
int main(void)
{
	int a,b,c;
	double p,s;
	printf("请输入三角形的三个边长a，b，c：\n");
	scanf("%d %d %d",&a,&b,&c);
		if(a+b>c){  //判断该三角形是否为三角形 
		
		p=(a+b+c)/2;		//求半周长 
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("该三角形的面积为:%lf",s);
		}
		else{
			printf("该数值不符合三角形的定义标准");
		} 
	 
}
*/


/*
*4.实现成绩等级的编程
 
#include <stdio.h>
int main()
{
	int t;
	printf("请输入成绩：");
	scanf("%d",&t); 
	if(t>=90&&t<=100)
	{
		printf("等级为A");
	}else if(t>=80&&t<90){
		printf("等级为B");
	}else if(t>=70&&t<80){
		printf("等级为C");
	}else if(t>=60&&t<70){
		printf("等级为D"); 
	}else{
		printf("等级为E");
	}
	 
} 
*/ 


/*
*5.输出码值为33到127之间的ASCII码值、字符对照表
 
#include <stdio.h>
main()
{
	char c;
	int n=0;
	printf("ASCII 值：\n");
	for(c=33; c<=127; c++)
	{
		printf("字符:%c 十进制:%d",c,c);
		n++;
	if(n%5==0)
		printf("\n");
	}
}
*/ 

/*
//6.编程从终端读入10个数据到数组中，统计其中正数的个数，并计算他们之和 
#include <stdio.h>
main()
{ 
	int i,a[10],sum,count;
	sum=count=0;
	for(i=0;i<10;i++)
	{
	scanf("%d",&a[0]);
	}
	for(i=0;i<10;i++){
		if(a[i]>0)
		{
			count++;
			sum+=a[i];
			printf("count=%d,sum=%d\n",count,sum);
		}
	}
} 
 */
 
 
 //7.要求输出1到100的所有偶数，遇到10的倍数换行，每个数字之前用空格分隔
#include <stdio.h>
main()
{
	int i,n=0;
	for(i=1;i<100;i++)
	{
		if(i%2==0)
		{
			n++;
			printf("  %d",i);
			if(n%5==0)
			printf("\n");
		}
	}
	return 0;
} 
