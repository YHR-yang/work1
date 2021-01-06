#include <stdio.h>
int main(void){
	int x,y,t;
	printf("请输入2个数x,y:");
	scanf("%d%d",&x,&y);
	t=x;
	x=y;
	y=t;
	printf("交换后为:");
	printf("x=%d,y=%d\n",x,y);
	printf("G20060235 杨浩然");
	return 0;
}
