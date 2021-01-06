#include <stdio.h>
int main(void)
{
/*	int a,b,max;
	printf("请输入2个数");
	scanf("%d%d",&a,&b);
	  max=a>b?a:b;
	  printf("max=%d\n",max);
*/
		int a,b,c,max;
		printf("请输入3整数:");
		scanf("%d%d%d",&a,&b,&c);
		if(a<b)
		{
			max=a;a=b;b=max;
		if(a<c)
			max=a;a=c;c=max;
		if(b<c)
			max=b;b=c;c=max;
		}
	  printf("由小到大:%d,%d,%d\n",a,b,c);
	  printf("G20060235杨浩然!"); 
	  
} 
