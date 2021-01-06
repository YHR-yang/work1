#include <stdio.h>
int main(void)
{	//do......while 型  运行结果是1 
/*	int i=1,s=0;
	do
	{
		s=s+i;
		i++;
	}while(i<1);
	printf("s=%d\n",s);
*/	


	//while 型   运行结果是0 
/*	int i=1,s=0;
	while(i<1)
	{
		s=s+i;
		i++;
	} 
	printf("s=%d\n",s);
*/
/*

	//for 技术控制循环语句
	//求n个分数的和：输入n值，求，1/1-1/2+1/3.。。+（-1）*1/n的值
	int n,i;
	printf("输入项数:");
	scanf("%d",&n);
	double sum=0.0,sign=1.0,term;  		//分别存放和，正负调节变量、各项的值 
	for(i=1;i<=n;i++)					
	{
		term=sign/i;					//求第i项的值 
		sum+=term;						//将求第i项的值term加到累加器 
		sign*=-1;						//改变下一项的符号 
	} 
	printf("sum=%f\n",sum);				//输出分数和 
*/

	
	//break语句，循环嵌套
	//一个循环体内有包含另一个完整的循环结构，称为循环嵌套。
	//while,for,do....whlie可以互相嵌套自由组合	
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	 

