#include <stdio.h>

int main(){
	int s, m;
	int t=1;
	int i;
	scanf("%d %d", &s, &m);
	for(i=2; i<=s; i++){
		if(!(s%i)&&!(m%i)) t=i;
	}
	printf("%d %d", s/t, m/t);
	return 0;
}