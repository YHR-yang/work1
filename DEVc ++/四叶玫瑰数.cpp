#include<stdio.h>
int rose(int digit) {			//����һ�������� 
	int n = digit;				//n����Ȼ�� 
	int k=0,sum=0; 	 			
	while(n>0) {
		k = n % 10;				//ȡ���� 
		sum += k*k*k*k;			//������Ĵ� �������� 
		n /= 10;				//���� 
	}
	if( sum == digit) {         //���sum����digit ִ�У������� 
	return 1;
	}
	return 0;
}
int main()
{
	printf("G20060235 ���Ȼ\n\n"); 
	int i;					//����i���� 
	int count = 0;			//����������Ϊ0 
	printf("��Ҷõ����Ϊ��\n");
	for(i=1000; i<=9999; i++) {				//i��ʼֵΪ1000. 
	if (rose(i)) {				//����rose���� 
		count++;
		printf("%4d ", i);
		}
	}
	getchar();
	return 0;
}


