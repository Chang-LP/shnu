#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, n, t, min = 0, max = 0;
	scanf("%d", &n);
	for (i=0; i<n; i++) {
		scanf("%d", &t);
		if (i==0) {min = t;	max = t;}
		if (t<min) min = t;
		if (t>max) max = t;
	}
	printf("%d %d", max, min);
	return 0;
}
