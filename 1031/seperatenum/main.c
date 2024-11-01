#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n[100];
	int l = 0;
	int x, t=0, i=0;

	x = getchar();
	while (x != '\n') {
		n[l] = x - '0';
		l++;
		x = getchar();
	}
	if (l>3 && l%3) {
		for (; t<l%3; t++) {
			printf("%d", n[t]);
		}
		printf(",");
	}
	for (; t<l; t++) {
		i++;
		printf("%d", n[t]);
		if (i%3==0 && t!=l-1) printf(",");
	}
	return 0;
}
