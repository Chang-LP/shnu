#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m, p;
	char c;
	scanf("%d %c", &m, &c);
	p = ((m - 1000) / 500 + 1) * 4 + 8;
	if (m <= 1000) p = 8;
	if (c == 'y') p += 5;
	printf("%d", p);
	return 0;
}