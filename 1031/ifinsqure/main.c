#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y;
	scanf("%d %d", &x, &y);
	if (-1<=x && x<=1) {
		if (-1<=y && y<=1) printf("yes");
		else printf("no");
	}
	return 0;
}