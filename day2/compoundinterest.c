//program to calculate compound interest
#include <stdio.h>
#include <math.h>
int main(){
	long long int principal;
	double rate, years, interest;
	printf("Principal Amount : ");
	scanf("%lld", &principal);
	printf("Number of years : ");
	scanf("%lf", &years);
	printf("Rate of Interest : ");
	scanf("%lf", &rate);
	
	interest = principal * pow(1 + rate / 100, years) - principal;
	
	printf("Interest : %.2lf", interest);
	
	return 0;
}