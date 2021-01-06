#include <stdio.h>
int main(void)
{
	char ch;
	printf("ÇëÊäÈë×Ö·û:");
	scanf("%c",&ch);

	if(ch>='a'&&ch<='z'  ||  ch>='A'&&ch<='Z')
	   	printf("%d\n",&ch);
	else if(ch>='0'&&ch<='9')
		printf("%c\n",&ch);
	else
		printf("ÄúÊäÈëÓÐÎó£¡");
	return 0;
}
