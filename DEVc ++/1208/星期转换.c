#include <stdio.h>
int main(void){
	int i ;
    printf("������һ��0~6����");
    scanf("%d",&i);
    if (i>=0&&i<=6) {
        switch (i) {
            case 0:
                printf("������\n");
                break;
            case 1:
                printf("����һ\n");
                break;
            case 2:
                printf("���ڶ�\n");
                break;
            case 3:
                printf("������\n");
                break;
            case 4:
                printf("������\n");
                break;
            case 5:
                printf("������\n");
                break;
            case 6:
                printf("������\n");
                break;
                
            default:
                printf("��������");
                break;
        }
    }
    printf("G20060235 ���Ȼ");
    return 0;
}
