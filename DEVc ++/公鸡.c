#include <stdio.h>
int main(void){
	int x,y,z;
	for(x=0;x<=20;x++){
		for(y=0;y<=33;y++){
			z=100-x-y;
			if((z%3==0)&&(5*x+3*y+z/3==100))
			printf("¹«¼¦£º%d,Ä¸¼¦£º%d,Ð¡¼¦£º%d\n",x,y,z); 
		}
	}
	return 0;
} 
