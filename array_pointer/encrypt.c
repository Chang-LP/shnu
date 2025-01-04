#include <stdio.h>

int main() {
	int a, b;
	int keylen=0, stringlen=0;
	int i, j;
	int p;
	char subkey[26]= {""};
	char square[5][5];
	char t;
	char key[25]= {""};
	int alphabet[26]= {0};
	char string[51]= {""};
	char encrypt[51]= {""};
	i = 0;
	t = getchar();
	while(t!='\n') {
		key[i++] = t;
		alphabet[t-'a'] = 1;
		keylen=i;
		t = getchar();
	}
	i = 0;
	t = getchar();
	while(t!='\n') {
		string[i++] = t;
		stringlen=i;
		t = getchar();
	}
//	printf("%d %d\n", keylen, stringlen);
	p = 0;
	for(i=0; i<26; i++) {
		if(alphabet[i]==0) {
			subkey[p++]=i+'a';
		}
	}
	p = 0;
	for(i=26-keylen; i<25; i++) {
		subkey[i] = key[p++];
	}
	p = 0;
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
			square[i][j]=subkey[p++];
		}
	}

	if(stringlen%2) encrypt[stringlen-1] = string[stringlen-1];
	char *ptr=(char*)square;
	for(i = 0; i<stringlen-1; i+=2) {
		for(a=0; a<25; a++) {
			if(*(ptr+a)==string[i]) break;
		}
		for(b=0; b<25; b++) {
			if(*(ptr+b)==string[i+1]) break;
		}
//		printf("%d %d\n", a, b);
		if(a==b) encrypt[i] = encrypt[i+1] = string[i];
		else if(string[i]==key[keylen-1]||string[i+1]==key[keylen-1]) {
			encrypt[i] = string[i];
			encrypt[i+1] = string[i+1];
		} else if(a%5==b%5||a/5==b/5) {
			encrypt[i]=*(ptr+b);
			encrypt[i+1]=*(ptr+a);
		} else {
			encrypt[i]=square[a/5][b%5];
			encrypt[i+1]=square[b/5][a%5];
		}
	}
//	printf("%s\n%s\n%s\n%d\n%s\n", key, subkey, string, stringlen, encrypt);
	printf("%s", encrypt);
	return 0;
}