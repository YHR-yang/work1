#include <stdio.h>
int main(void)
{
	char ch;
	printf("�������ַ�:");
	scanf("%c",&ch);

	if(ch>='a'&&ch<='z'  ||  ch>='A'&&ch<='Z')
	   	printf("%d\n",&ch);
	else if(ch>='0'&&ch<='9')
		printf("%c\n",&ch);
	else
		printf("����������");
	return 0;
}
