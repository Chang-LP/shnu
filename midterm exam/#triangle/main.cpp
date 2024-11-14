#include<stdio.h>

int main() {
	int x, i;
	scanf("%d", &x);
	for(; x>0; x--) {
		for(i=x; i>0; i--) printf("#");
		printf("\n");
	}
	return 0;
}