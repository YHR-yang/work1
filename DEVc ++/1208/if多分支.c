#include <stdio.h>
int main(void)
{
	int x,y,f;
	printf("G20060235 ���Ȼ\n");
	while (1){
	printf("���������ĳɼ���");
	scanf ("%d",&f);
	if(f>=90)
		printf("���ĳɼ����㣬�ܰ���\n");
	else if(f>=80)
		printf("���ĳɼ����ã������ԣ�\n");
	else if(f>=70)
		printf("���ĳɼ��еȣ����պϣ�\n");
	else if (f>=60)
		printf("���ĳɼ��ϸ񣬼������ͣ�\n");
	else 
		printf("���ĳɼ����ϸ񣬸��Ҳ���ȥ��\n");
		break;	 
	} 
	return 0; 
}
