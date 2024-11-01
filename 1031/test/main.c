#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x=3,y;
	do{
		y=x--;
		printf("%d  %d\n",x,y);
		if(!y){
			printf("*  %d  %d\n\a",x,y);
			//continue;
		}
	}while(1<=x<=2);
	
	return 0;
}