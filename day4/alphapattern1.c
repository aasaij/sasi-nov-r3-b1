#include <stdio.h>
//5
//A			1
//AB		2
//ABC		3
//ABCD		4
//ABCDE		5
int main(){
	int n;
	scanf("%d", &n);
	for (int i = 1; i<=n; i++){
		for (int j = 1; j<=i; j++){
//			printf("%c", 64+j);
			printf("*");
//			printf("%c", 177);
		}
		printf("\n")	;
	}
	return 0;
}