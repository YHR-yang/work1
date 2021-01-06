#include <stdio.h>
main()
{			//实现1到100之间的偶数输出，每5个数输出，然后换行 
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
