#include <stdio.h>

int main() {
	char a[50] = {};
	char t;
	int i = 0;
	int j;
	int b;
	t = getchar();
	while(t!='\n') {
		a[i++]=t;
		t = getchar();
	}
	for(j=0; j<i/2; j++) {
//		printf("%c\t%c\n", a[i-1-j], a[j]);
		if(a[i-1-j]!=a[j]) {
			b=0;
			break;
		} else {
			b=1;
		}
	}
	printf(b?"Yes":"No");
	return 0;
}