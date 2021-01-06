#include <stdio.h>
int sum(int n)
{
	int s=0;
	int i;
	for(i=1;i<=n;i++)
	{
		s+=i;
	}
	return s;
}
int main(void)
{
	int n;
	printf("请输入一个数字：");
	scanf("%d",&n);
	printf("1到%d的和是：%d",n,sum(n));
	
	return 0;	
}
