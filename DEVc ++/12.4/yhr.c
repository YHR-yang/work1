#include <stdio.h>
int main(void)
{
/*	int a,b,max;
	printf("������2����");
	scanf("%d%d",&a,&b);
	  max=a>b?a:b;
	  printf("max=%d\n",max);
*/
		int a,b,c,max;
		printf("������3����:");
		scanf("%d%d%d",&a,&b,&c);
		if(a<b)
		{
			max=a;a=b;b=max;
		if(a<c)
			max=a;a=c;c=max;
		if(b<c)
			max=b;b=c;c=max;
		}
	  printf("��С����:%d,%d,%d\n",a,b,c);
	  printf("G20060235���Ȼ!"); 
	  
} 
