#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int y, m, d;
	scanf("%d-%d", &y, &m);
	switch (m) {
			case 2 : if (y%4==0 && y%100 || y%400==0) d=29; 
				else d=28; 
				break;
			case 4 : d=30; break;
			case 6 : d=30; break;
			case 9 : d=30; break;
			case 11 : d=30; break;
			default : d=31;
			}
	printf("%d", d);
	return 0;
}