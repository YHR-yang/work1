/*
*G20060235 ���Ȼ
*/ 

/*1.��֪һ��Ӣ���ַ�����дһ��c����
*����Ļ����ʾ����ǰ�������������ַ� 
*/
/* 
#include <stdio.h>
int main(void)
{
	char x,y;
	char ch='c';
	x='c'+1;
	y='c'-1;
	printf("%c %c %c",y,ch,x);
	return 0;
}
*/

//2.��дһ�����򣬴Ӽ�������2������x��y����x��y��ֵ���н���
/*	
#include <stdio.h>
int main(void)
{
	int x,y,t;
	printf("������2�����֣�\n");
	scanf("%d %d",&x,&y);	
		t=x;
		x=y;
		y=t;
	printf("������������ǣ�%d %d",x,y);
	return 0;
}
*/

//3.�ɼ�����������������������������Ϊ�߳��������ε����

/* 
#include <stdio.h>
#include <math.h>
int main(void)
{
	int a,b,c;
	double p,s;
	printf("�����������ε������߳�a��b��c��\n");
	scanf("%d %d %d",&a,&b,&c);
		if(a+b>c){  //�жϸ��������Ƿ�Ϊ������ 
		
		p=(a+b+c)/2;		//����ܳ� 
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("�������ε����Ϊ:%lf",s);
		}
		else{
			printf("����ֵ�����������εĶ����׼");
		} 
	 
}
*/


/*
*4.ʵ�ֳɼ��ȼ��ı��
 
#include <stdio.h>
int main()
{
	int t;
	printf("������ɼ���");
	scanf("%d",&t); 
	if(t>=90&&t<=100)
	{
		printf("�ȼ�ΪA");
	}else if(t>=80&&t<90){
		printf("�ȼ�ΪB");
	}else if(t>=70&&t<80){
		printf("�ȼ�ΪC");
	}else if(t>=60&&t<70){
		printf("�ȼ�ΪD"); 
	}else{
		printf("�ȼ�ΪE");
	}
	 
} 
*/ 


/*
*5.�����ֵΪ33��127֮���ASCII��ֵ���ַ����ձ�
 
#include <stdio.h>
main()
{
	char c;
	int n=0;
	printf("ASCII ֵ��\n");
	for(c=33; c<=127; c++)
	{
		printf("�ַ�:%c ʮ����:%d",c,c);
		n++;
	if(n%5==0)
		printf("\n");
	}
}
*/ 

/*
//6.��̴��ն˶���10�����ݵ������У�ͳ�����������ĸ���������������֮�� 
#include <stdio.h>
main()
{ 
	int i,a[10],sum,count;
	sum=count=0;
	for(i=0;i<10;i++)
	{
	scanf("%d",&a[0]);
	}
	for(i=0;i<10;i++){
		if(a[i]>0)
		{
			count++;
			sum+=a[i];
			printf("count=%d,sum=%d\n",count,sum);
		}
	}
} 
 */
 
 
 //7.Ҫ�����1��100������ż��������10�ı������У�ÿ������֮ǰ�ÿո�ָ�
#include <stdio.h>
main()
{
	int i,n=0;
	for(i=1;i<100;i++)
	{
		if(i%2==0)
		{
			n++;
			printf("  %d",i);
			if(n%5==0)
			printf("\n");
		}
	}
	return 0;
} 
