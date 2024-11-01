#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=0, g, s, b;
	for(g=1; g<=4; g++) {
		for(s=1; s<=4; s++) {
			if (g==s) continue;
			for(b=1; b<=4; b++) {
				if (b==g||b==s) continue;
				i++;
			}
		}
	}
	printf("%d", i);
	return 0;
}