#include <stdio.h>
main()
{
	int year;
	printf("G20060235 杨浩然\n");
	while(1)
	{
		printf("请输入一个年份：");
		scanf("%d",&year);
		if(((year%4==0)&&(year%100!=0))||(year%100==0))
			printf("%d为闰年\n",year);
		else 
			printf("%d不是闰年\n",year); 
	}
	
	return 0;
}
