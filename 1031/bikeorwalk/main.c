#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int d;
	float b, w;
	scanf("%d", &d);
	b = 50 + d/3.0;
	w = d/1.2;
	if (b>w) printf("Walk");
	else if (b==w) printf("All");
	else printf("Bike");
	return 0;
}