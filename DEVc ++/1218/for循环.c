#include <stdio.h>
main()
{			//ʵ��1��100֮���ż�������ÿ5���������Ȼ���� 
	int i,n=0;
	for(i=1;i<=100;i++)
	{
		if(i%2==0)
		{
			n++;
			printf("%d  ",i);
			if(n%5==0)
			printf("\n");	
		}
	}
}
