#include <stdio.h>

void SelectSort(int r[],int n);
const int N=6;

int main(void){
	int a[N];
	
	printf("����%d��������\n",N);
	for(int i=0;i<N;i++)
		scanf("%d",&a[i]);
	SelectSort(a,N);
	
	printf("�����Ľ����");
	for(int i=0;i<N;i++)
		printf("%d",a);
	printf("\n");
	
	return 0;
}
void SelectSort(int r[],int n)
{
	int i,j,mink;
	for(int i=0;i<n-1;i++)
	{
		if(r[mink]>r[j])    mink=j;
	}
	if(mink != i)
	{
		int t;
		t=r[i]; r[i]=r[mink];  r[mink]=t;
	} 
}










