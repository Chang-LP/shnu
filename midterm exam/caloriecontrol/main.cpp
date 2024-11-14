#include<stdio.h>

int main() {
	int i=1, a, b, sum, x=0;
	scanf("%d%d", &a, &b);
	sum=a+b;
	while(i<7) {
		i++;
		scanf("%d%d", &a, &b);
		if(a+b>3000 && a+b>sum) {
			sum=a+b;
			x=i;
		}
	}
	printf("%d", x);
	return 0;
}
