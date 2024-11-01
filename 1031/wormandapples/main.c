#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, x, y;
	scanf("%d%d%d", &n, &x, &y);
	n -= y / x + 1;
	printf("%d", n);
	return 0;
}