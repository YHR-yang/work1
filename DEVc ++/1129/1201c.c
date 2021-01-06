#include <stdio.h>
int main() {
/*输入小写转化为大写
*getchar putchar 
*/
	char a,b;
	ptintf("input a char:");
	a=getchar();
	b=a-32;
	putchar(b);
	return 0;
}
