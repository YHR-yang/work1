#include<stdio.h>
void swap(int a,int b)	
//swap��������������ʽ����a��b��ֵ����û�н���ʵ�ڲ���x��y��ֵ 
{
	int t;
	
	t=a;
	a=b;
	b=t;
}

int main(void)
{
	int a=5;
	int b=10;
	
	printf("����ǰa=%d,b=%d\n",a,b);
	swap(a,b);
	printf("������a=%d,b=%d\n",a,b);
	
	return 0;
}
