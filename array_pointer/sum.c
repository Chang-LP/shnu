#include <stdio.h>

int main() {
	int x;
	int i, j;
	int t;
	int k;
	int b = 0;
	scanf("%d", &x);
	for(i=1; i<=x/2; i++) {
		t = x;
		for(j=i; j<=x/2+1; j++) {
			t-=j;
			if(!t) {
//				printf("\a");
				b = 1;
				k = i;
				while(k!=j+1) {
					printf("%d ", k++);
				}
				printf("\n");
			}
		}
	}
	if(!b) printf("NONE");
	return 0;
}