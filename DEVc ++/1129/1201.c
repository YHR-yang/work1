#include <stdio.h>
int main(void){
	int x,y,t;
	printf("������2����x,y:");
	scanf("%d%d",&x,&y);
	t=x;
	x=y;
	y=t;
	printf("������Ϊ:");
	printf("x=%d,y=%d\n",x,y);
	printf("G20060235 ���Ȼ");
	return 0;
}
