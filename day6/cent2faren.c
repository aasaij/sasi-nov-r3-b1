//Program to convert centigrade to Farenheit
#include <stdio.h>

int main(){
	double cent, faren;
	scanf("%lf", &cent);
	faren = 1.8 * cent + 32;
	printf("%.2lf", faren);	
	return 0;
}