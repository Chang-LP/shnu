#include <stdio.h>

int main() {
	int i, j, k=0;
	int x1, x2;
	int t;
	int b;
	int arr[20]= {0};
	int arr1[20]= {0};
	int arr2[20]= {0};
	scanf("%d", &x1);
	while(x1--){
		scanf("%d", &arr1[x1]);
	}
	scanf("%d", &x2);
	while(x2--){
		scanf("%d", &arr2[x2]);
	}
	for(i=0; i<20; i++) {
		b=0;
		for(j=0; j<20; j++) {
			if(arr1[i]==arr2[j]) {
				b=1;
				break;
			}
		}
		if(!b) {
			arr[k++]=arr1[i];
		}
	}
	for(i=0; i<k-1; i++) {
		for(j=i+1; j<k; j++) {
			if(arr[i]>arr[j]) {
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	for(i=0; i<k; i++) {
		arr[i] ? printf("%d ", arr[i]) : 0;
	}
	return 0;
}