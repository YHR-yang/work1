#include <stdio.h>
float ave(float a1,float b1,float c1,float d1,float e1);
/********************主函数**************/ 
int main(void){
	float a,b,c,d,e,t;
	printf("请输入语文成绩：\n");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	t=ave(a,b,c,d,e);
	printf("这5位同学的语文平均成绩是:%.2f",t);
}
/***************子函数****************/ 
float ave(float a1,float b1,float c1,float d1,float e1){
	float s;
	s=(a1+b1+c1+d1+e1)/5;

	return s;
}

