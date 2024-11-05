#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	unsigned long long x, len=1;
	scanf("%llu", &x);
	while(x/len>=1000) {
		len*=1000;
	}
	printf("%llu", x/len);
	while(len>1) {
		x%=len;
		len/=1000;
		printf(",%llu", x/len);
	}
	return 0;
}