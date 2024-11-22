//program to check whether the given number is odd or even
#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
//	if (n % 2)
	if (n % 2==1)
		printf("Odd");
	else
		printf("Even");
	return 0;
}