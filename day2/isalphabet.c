//Program to check whether the given character is alphabet or not
#include <stdio.h>

int main(){
	char ch;
	scanf("%c", &ch);
//	if ((ch >=65 && ch <=90) || (ch >=97 && ch <=122))
	if ((ch >='A' && ch <='Z') || (ch >='a' && ch <='z'))
		printf("'%c' is an alphabet", ch);
	else
		printf("'%c' is not an alphabet", ch);
	return 0;
}