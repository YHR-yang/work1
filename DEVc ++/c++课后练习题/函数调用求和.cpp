#include <stdio.h>
	int sum(int n);								//�������� 
	int main(void){
		//�ú����Ĺ�����1��n�ĺ�
		int n;
		printf("���������֣�");
		scanf("%d",&n);
		printf("1��%d�ĺ��ǣ�%d",n,sum(n));		//��������
		return 0;
	} 
	int sum(int n)
	{
		int s=0;
		int i;
		for(i=1;i<=n;i++)
		{
			s=s+i;
		}
		return s;
	}
