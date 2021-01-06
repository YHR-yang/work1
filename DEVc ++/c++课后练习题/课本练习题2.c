#include <stdio.h>
int main(void){

	int a;
	printf("请输入数字：");
	scanf("%d",&a);
	if(a%5==0&&a%7==0)        	//该数目被5和7整除，则该数目输出 
		printf("该数目正确！"); 
	else 
		printf("该数目不正确！");
	return 0; 
}
