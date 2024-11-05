#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int min1, min2, max2, max1, x, n=0, t;
	float sum;
	scanf("%d%d%d%d", &min1, &min2, &max2, &max1);
	sum=min1+min2+max2+max1;
	while(min1>min2||min2>max2||max2>max1) {
		if(min1>min2) {t=min1; min1=min2; min2=t;}
		if(min2>max2) {t=min2; min2=max2; max2=t;}
		if(max2>max1) {t=max2; max2=max1; max1=t;}
	}
	scanf("%d", &x);
	while(x!=-1) {
		n++;
		sum+=x;
		if(x<min2) {
			if(x<min1) {
				min2=min1;
				min1=x;
			}
			else min2=x;
		}
		if(x>max2) {
			if(x>max1) {
				max2=max1;
				max1=x;
			}
			else max2=x;
		}
		scanf("%d", &x);
	}
	sum-=min1+min2+max2+max1;
	printf("%.2f", sum/n);
	return 0;
}