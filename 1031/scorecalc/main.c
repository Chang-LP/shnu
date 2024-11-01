#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int d[50];
	int a, b, cnt = 0, x, t;
	float sum = 0.0;
	scanf("%d", &x);
	while (x+1) {
		sum+=x;
		d[cnt++] = x;
		scanf("%d", &x);
	}
	
	for (a=0;a<cnt;a++) {
		for (b=a+1;b<cnt;b++) {
			if (d[b]<d[a]) {
				t=d[b];d[b]=d[a];d[a]=t;
			}
		}
	}
	sum-=d[0]+d[1]+d[cnt-2]+d[cnt-1];
	printf("%.2f", sum/(cnt-4));
	return 0;
}