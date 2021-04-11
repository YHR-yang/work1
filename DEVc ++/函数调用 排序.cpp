#include <stdio.h>
int max_3(int x,int y,int z);
int main(void)
{
	int a,b,c,s;
	printf("请输入三个整数：");
	scanf("%d%d%d",&a,&b,&s);
	c=max_3(a,b,s);
	printf("a=%d,b=%d,s=%d,max=%d\n",a,b,s,c);
	return 0;
}
int max_3(int x,int y,int z){
	int t;
	if(x<y){
		t=x;
		x=y;
		y=t;
	}
	if(x<z){
		t=x;
		x=z;
		z=t;
	}
	if(y<z){
		y=t;
		y=z;
		z=t;
	}
	return (x);
} 
