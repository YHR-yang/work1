#include <stdio.h>
	int sum(int n);								//函数声明 
	int main(void){
		//该函数的功能是1到n的和
		int n;
		printf("请输入数字：");
		scanf("%d",&n);
		printf("1到%d的和是：%d",n,sum(n));		//函数调用
		return 0;
	} 
	int sum(int n)
	{
		int s=0;
		int i;
		for(i=1;i<=n;i++)
		{
			s=s+i;
		}
		return s;
	}
