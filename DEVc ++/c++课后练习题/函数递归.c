/* 
//程序递归实现输出一个数字 
#include <stdio.h>
void p(int);
int main(void)
{
	int n;
	printf("请输入数字：");
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

//利用非递归和递归进行因式分解
#include <stdio.h>
void factor(int);
void factorr(int);

int main(void)
{
	int n;
	printf("请输入分解的整数：");
	scanf("%d",&n);
	
	printf("\n 非递归分解：%d=",n);
	factor(n);
	printf("\n 递归分解：%d=",n);
	factorr(n);
	
	return 0;
 } 
 //非递归分解法
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
  //递归分解方法
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
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
   
