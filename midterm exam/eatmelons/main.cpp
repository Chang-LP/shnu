#include<stdio.h>

int main() {
	int n;
	float x, y;
	scanf("%d%f%f", &n, &x, &y);
	n-=y/x;
	printf("%d", n);
	return 0;
}