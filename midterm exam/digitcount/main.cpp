#include<stdio.h>

int main() {
	int a, b, i, x, n=0;
	scanf("%d%d", &a, &b);
	for(i=a; i<=b; i++) {
		for(x=i; x>1; x/=10) {
			if(x%10==3) n++;
		}
	}
	printf("%d\n", n);
	return 0;
}
