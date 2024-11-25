/*
do
{
	<statements>
}while(<condition>);
*/
//Program to check whether he given character is vowel or not
#include <stdio.h>
int main(){
	char choice;
	do{
		char ch;
		scanf("\n%c", &ch);
		switch(ch){
			case 'A': case 'E': case 'I': case 'O': case 'U':
			case 'a': case 'e': case 'i': case 'o': case 'u':
				printf("Vowel"); break;
			default:
				printf("Not vowel");
		}
		printf("\nWant to continue [Y/N] ?");
		scanf("\n%c", &choice);
	}while(choice == 'Y' || choice == 'y');
	return 0;
}