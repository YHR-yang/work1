#include <stdio.h>
int main (void){
	int x,y,f;
	printf("G20060235 ���Ȼ\n");
	while (1)
	{
		printf("������ɼ���");
		scanf("%d",&f);
		switch(f/10)
		{
			case 10:
			case 9: printf("�ɼ����㣡\n");    			break;
			case 8: printf("�ɼ����ã�����\n");			break;
			case 7: printf("�ɼ��ȽϺã��������ͣ�\n");	break;
			case 6: printf("�ɼ��ϸ񣡶��ѧϰ\n");		break;
			default: printf("�����񣡸��Ҳ���ȥ	\n"); 
		}
	}
	return 0; 
} 
