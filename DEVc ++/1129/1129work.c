#include <stdio.h>
int main(void){
/*
	//������400�ı���������4�ı���������100�ı���
	int year;
	printf("��������ݣ�");
	scanf("%d",&year);
	if(year%400==0|| year%4==0&& year%100!=0)
		printf("�����Ϊ����\n");
	else 
		printf("���������\n");
*/

	//����4��������������С��������
/*	int a,b,c,d;
	printf("������4λ����:");
	scanf("%d  %d  %d  %d",&a,&b,&c,&d);
	if(a>b)
	{
	 int t;
	 t=a;
	 a=b;
	 b=t;
	} 
	if(b>c)
	{
		int t;
		t=b;
		b=c;
		d=t;
	}
	if(c>d){
		int t;
		t=c;
		c=d;
		d=t;
	}
	if(a>b)
	{
		int t;
		t=a;
		a=b;
		b=t;
	}
	if(b>c)
	{
		int t;
		t=b;
		b=c;
		c=t;
	}
	if(a>b)
	{
		int t;
		t=a;
		a=b;
		b=t;
	}
	printf("��λ�����Ĵ�С˳��:");
	printf("%d   %d  %d   %d   ",a,b,c,d);
*/
/*
	//�����ʷ�
	int x,y;
	char yn;
	printf("������2�����������(��λ/��):");
	scanf("%d %c",&x,&y);
	
	if(x<=1000)
		y=8;
	else 
	{
		y=8+(x-1000)/500-4;
		if((x-100)&500!=0) y+=4;
	}
	if(yn=='y') y+=5;
	printf("%d",y);
	
*/

	//�����ַ�
	
	char ch;
	printf("������һ���ַ�: ");
	scanf("&c",&ch);
	if(ch>='a'&&'z'||ch>='A'&&ch<='Z')
		printf("%d\n",ch);
	else if(ch>='0'&&ch<='9')
		printf("%c\n",ch);
	else 
		printf("��������\n");
	return 0;
}
