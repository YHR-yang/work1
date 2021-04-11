#include <stdio.h>

int Input(int arr[]);
double GerAverage(int arr[],int size);
int Count(int arr[],int size,double ave);
const int N=10;

int main(void){
	int age[N],n,k;
	double ave;
	
	n=Input(age);
	ave=GerAverage(age,n);
	k=Count(age,n,ave);
	printf("平均年龄是：%.1f\n大于平均年龄的学生数是：%d\n",ave,k);
	return 0; 
}
int Input(int arr[])
{
	int n=0,a;
	while(1)
	{
		scanf("%d",&a);
		if(a<=0)   break;
		arr[n++] =a;
	}
	return n;
}
double GerAverage (int arr[],int size){
	int i;
	double ave,sum=0;
	
	for(i=0;i<size;i++)
	{
		sum+=arr[i];
	}
	ave=sum/size;
	
	return ave;
}
int Count(int arr[],int size,double ave)
{
	int k=0,i;
	for(i=0;i<size;i++)
	{
		if(arr[i]>ave)    k++;
	}
	return k;
}







