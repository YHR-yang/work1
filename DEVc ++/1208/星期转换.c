#include <stdio.h>
int main(void){
	int i ;
    printf("请输入一个0~6的数");
    scanf("%d",&i);
    if (i>=0&&i<=6) {
        switch (i) {
            case 0:
                printf("星期日\n");
                break;
            case 1:
                printf("星期一\n");
                break;
            case 2:
                printf("星期二\n");
                break;
            case 3:
                printf("星期三\n");
                break;
            case 4:
                printf("星期四\n");
                break;
            case 5:
                printf("星期五\n");
                break;
            case 6:
                printf("星期六\n");
                break;
                
            default:
                printf("输入有误");
                break;
        }
    }
    printf("G20060235 杨浩然");
    return 0;
}
