//Program to add two numbers
#include <stdio.h>

int main(){
	double n1, n2, sum;
	scanf("%lf%lf", &n1, &n2);
	sum = n1 + n2;
	printf("%.2lf", sum);
	return 0;
}