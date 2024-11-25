#include <stdio.h>
//5
//1			1
//12		2
//123		3
//1234		4
//12345		5
int main(){
	int n;
	scanf("%d", &n);
	for (int i = 1; i<=n; i++){
		for (int j = 1; j<=i; j++){
			printf("%d", j);
		}
		printf("\n")	;
	}
	return 0;
}