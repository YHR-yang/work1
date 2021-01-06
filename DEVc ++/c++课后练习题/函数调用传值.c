#include<stdio.h>
void swap(int a,int b)	
//swap函数交换的是形式参数a和b的值，并没有交换实在参数x和y的值 
{
	int t;
	
	t=a;
	a=b;
	b=t;
}

int main(void)
{
	int a=5;
	int b=10;
	
	printf("交换前a=%d,b=%d\n",a,b);
	swap(a,b);
	printf("交换后a=%d,b=%d\n",a,b);
	
	return 0;
}
