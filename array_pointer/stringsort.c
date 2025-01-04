#include <stdio.h>

int main() {
	int t, i;
	int a[26] = {0};
	t = getchar();
	while(t!='\n') {
		a[t-'a']=1;
		t = getchar();
	}
	for(i=0; i<26; i++) {
		if(a[i]) {
			printf("%c", i+'a');
		}
	}
	return 0;
}