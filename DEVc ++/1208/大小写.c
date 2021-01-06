#include<stdio.h>
int main(){ 
	printf("G20060235 ÑîºÆÈ»"); 
	while (1)  
{
	char b;
	scanf("%c", &b);
	if (b >= 'A' && b <= 'Z'){
		b = b + 32;
		printf("%c", b);
		}
	else if (b >= 'a' && b <= 'z'){
		b = b - 32;
		printf("%c", b);
		}	
} 
	return 0;
}


