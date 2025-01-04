#include <stdio.h>

int main() {
	int i, x, t, a[26] = {0};
	t = getchar();
	while(t!='\n') {
		a[t-'a']++;
		t = getchar();
	}
	t = a[0];
	for(i=0; i<25; i++) {
		if(a[i+1]>t) {
			t = a[i+1];
			x = i+1;
		}
	}
	printf("%c %d", x+'a', t);
	return 0;
}