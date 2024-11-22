//Program to find sum and average of three integers
#include <stdio.h>

int main(){
	int a, b,c, sum;
	scanf("%d %d %d", &a, &b, &c);
	sum = a+b+c;
	printf("Sum : %d\t Average : %.2f\n", sum, sum/3.0);
	return 0;
}