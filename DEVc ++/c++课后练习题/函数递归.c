/* 
//����ݹ�ʵ�����һ������ 
#include <stdio.h>
void p(int);
int main(void)
{
	int n;
	printf("���������֣�");
	scanf("%d",&n);
	p(n);
}
void p(int n)
{
	if(n/10==0)
	{
		printf("%d",n);
		return;
	}	
	p(n/10);
	printf("%d",n%10);
}
*/

//���÷ǵݹ�͵ݹ������ʽ�ֽ�
#include <stdio.h>
void factor(int);
void factorr(int);

int main(void)
{
	int n;
	printf("������ֽ��������");
	scanf("%d",&n);
	
	printf("\n �ǵݹ�ֽ⣺%d=",n);
	factor(n);
	printf("\n �ݹ�ֽ⣺%d=",n);
	factorr(n);
	
	return 0;
 } 
 //�ǵݹ�ֽⷨ
void factor(int n)
 {
 	int i=2;
 	if(n<0)
 	{
 		n=-n;
	 }
	 while (n>2)
	 {
	 	for(i=2;i<=n;i++)
	 	{
	 		if(n%i==0)
			 {
			 	if(n!=i)
			 	{
			 		printf("%d*",i);
				 }
				 else
				 {
				 	printf("%d",i);
				 }
				 n=n/i;
				 i=2;
				 break;
			 }
		 }
	 }
  }
  //�ݹ�ֽⷽ��
  void factorr(n)
  {
  	int i;
  	
  	if(n<0)
  	{
  		n=-n;
	}
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			printf("%d*",i);
			factorr(n/i);
			return;
		}
	  }
	  printf("%d",n);  
   } 
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
   
