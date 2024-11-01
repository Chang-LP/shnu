#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, a, s=0, b;
	scanf("%d", &n);
	for(a=1; ; a++) {
		s+=a;
		for(b=1; b<a; b++) {
			if(s-2*b==n) {
				printf("%d %d\n", b, a);
				return 0;
			}
		}
	}
	return 0;
}