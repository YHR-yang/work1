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
	printf("������һ�����֣�");
	scanf("%d",&n);
	printf("1��%d�ĺ��ǣ�%d",n,sum(n));
	
	return 0;	
}
