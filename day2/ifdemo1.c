//Program to demonstrate if statement
#include <stdio.h>

int main(){
	int units;
	double bill_amt = 0;
	scanf("%d", &units);
	if (units> 100)
		bill_amt = (units - 100) * 3.5;
	printf("Bill Amount : %.2lf", bill_amt);
	return 0;
}