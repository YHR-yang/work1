#include<stdio.h>
int rose(int digit) {			//定义一个数字类 
	int n = digit;				//n是自然数 
	int k=0,sum=0; 	 			
	while(n>0) {
		k = n % 10;				//取余数 
		sum += k*k*k*k;			//自身乘四次 最后结果相加 
		n /= 10;				//整除 
	}
	if( sum == digit) {         //如果sum等于digit 执行，。。。 
	return 1;
	}
	return 0;
}
int main()
{
	printf("G20060235 杨浩然\n\n"); 
	int i;					//定义i变量 
	int count = 0;			//设置自增量为0 
	printf("四叶玫瑰数为：\n");
	for(i=1000; i<=9999; i++) {				//i初始值为1000. 
	if (rose(i)) {				//调用rose函数 
		count++;
		printf("%4d ", i);
		}
	}
	getchar();
	return 0;
}


