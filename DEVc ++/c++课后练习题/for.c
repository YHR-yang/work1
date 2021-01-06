#include <stdio.h>
int main(void){
	//输出1到100之间的偶数，每2个数之间空格隔开 
	printf("G20060235 杨浩然\n");
	int m,i,n=0;
	for(m=1;m<=100;m++)
	{
		for(i=2;i<m;i++)
			if(m%2!=0) break;
		if(i==m)
		{
			n++;
			printf("%3d   ",m);
			if(n%5==0)
				printf("\n");
		}	
	}
	return 0;
}
