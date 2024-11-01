#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//char *day[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	int a, b, i, t=1;
	scanf("%d %d", &a, &b);
	//if (b==2000) b=2;
	for (i=b;i>0;i--) {
		t*=a;
		t = t % 7;
	}
	//printf("%s", day[t]);
	switch (t) {
		case 1 : printf("Monday"); break;
		case 2 : printf("Tuesday"); break;
		case 3 : printf("Wednesday"); break;
		case 4 : printf("Thursday"); break;
		case 5 : printf("Friday"); break;
		case 6 : printf("Saturday"); break;
		case 7 : printf("Sunday"); break;
	}	
	return 0;
}