//Program to check whether the given number is +ve, -ve or zero
#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	if( n > 0)
		printf("+ve");
	else if (n < 0)
		printf("-ve");
	else
		printf("Zero");
	return 0;
}