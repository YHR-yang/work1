#include <stdio.h>
float ave(float a1,float b1,float c1,float d1,float e1);
/********************������**************/ 
int main(void){
	float a,b,c,d,e,t;
	printf("���������ĳɼ���\n");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	t=ave(a,b,c,d,e);
	printf("��5λͬѧ������ƽ���ɼ���:%.2f",t);
}
/***************�Ӻ���****************/ 
float ave(float a1,float b1,float c1,float d1,float e1){
	float s;
	s=(a1+b1+c1+d1+e1)/5;

	return s;
}

