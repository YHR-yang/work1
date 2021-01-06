#include<stdio.h>
int a[1000];
int main(void)
{
	int n,k=0,j=10,i;
	
	for(i=j*j;i<1000;j++,i=j*j)
	{
		if(i%10==i/10%10||i%10==i/100||i/100==i/10%10)
		{
			a[++k]=i;
		} 		
			
	}
	scanf("%d",&n);
	printf("%d\n",a[n]);
	
	return 0;
}

