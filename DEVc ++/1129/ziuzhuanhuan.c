#include <stdio.h>
int main(void)
{
	char a,b;
	printf("请输入小写字母:");
	a=getchar();
	b=a-32;
	printf("转换大写字母:");
	putchar(b);
	
	printf("\nG20060235 杨浩然");
	return 0;
}
