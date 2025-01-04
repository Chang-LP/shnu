#include <stdio.h>

void str_bin(char* str1, char* str2) {
	int s[26] = {0};
	int i;
	int j=0;
	for(i=0; i<100; i++) {
		if(str1[i]!='\0'||str2[i]!='\0')
			s[str1[i]-'a'] = 1;
		s[str2[i]-'a'] = 1;
	}
	for(i=0; i<26; i++) {
		if(s[i]) {
			str1[j++] = i+'a';
		}
	}
	printf("%s", str1);
}

int main() {
	char a1[100] = {};
	char a2[100] = {};
	scanf("%s", a1);
	scanf("%s", a2);
	str_bin(a1, a2);
	return 0;
}