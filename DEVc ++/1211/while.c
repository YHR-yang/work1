#include <stdio.h>
main()
{
	int year;
	printf("G20060235 ���Ȼ\n");
	while(1)
	{
		printf("������һ����ݣ�");
		scanf("%d",&year);
		if(((year%4==0)&&(year%100!=0))||(year%100==0))
			printf("%dΪ����\n",year);
		else 
			printf("%d��������\n",year); 
	}
	
	return 0;
}
