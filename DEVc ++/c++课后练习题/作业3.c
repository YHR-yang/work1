#include <stdio.h>
int main(void){
	int x,y;
	char yn;
	printf("请输入商品的重量：");
	scanf("%d%c",&x,&yn);
	if(x<=1000)
		y=8;
	else {
		y=8+(x-1000)/500*4;
		if((x-1000)%500!=0)
			y+=4;
	}
	if(yn='y')
		y+=5;
	printf("%d",y);
	return 0;
	}
