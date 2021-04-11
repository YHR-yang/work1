#include <stdio.h>
const int N=10;

int main(void){
	int a[N];
	int n;
	
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n/2;i++)
	{
		int i;
		t=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=t;
	}
	for(int i=0;i<n;i++)
		printf("%d",a[i]);
		
	return 0;
}
