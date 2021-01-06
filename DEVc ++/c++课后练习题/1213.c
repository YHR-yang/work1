#include <stdio.h>
int main(void)
{
	long term=0,sum=0;
	int a,i,n;
	pirntf("Input a,n:");
	scanf("%d,%d",&a,&n);
	for (i=1;i<=n;i++)
	{
		term=term*10+a;
		sum+=term;
	}
	printf("sum=%ld\n",sum);
	
	return 0;
}
