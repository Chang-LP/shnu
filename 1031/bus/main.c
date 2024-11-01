#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int h1, h2, m1, m2, s1, s2, delta, dh, dm, ds;
	scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
	delta = (h2-h1)*3600 + (m2-m1)*60 + (s2-s1);
	dh = delta/3600;
	dm = delta%3600/60;
	ds = delta%3600%60;
	printf("%02d:%02d:%02d %s", dh, dm, ds, dh>=2?"NO":"OK");
	return 0;
}