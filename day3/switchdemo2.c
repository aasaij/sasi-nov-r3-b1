//Program to print digit in word
#include <stdio.h>

int main(){
	int digit;
	scanf("%d", &digit);
	switch(digit){
		case 1 ...10:
			printf("Value is within the range"); break;
		default:
			printf("Out of range!");
	}
	return 0;
}