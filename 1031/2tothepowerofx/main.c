#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, i, x=1;
	scanf("%d", &n);
	if (0<=n && n<=31){
		for(i=n;i>0;i--){
			x *= 2;
		}
		printf("%d", x);
	}
	return 0;
}