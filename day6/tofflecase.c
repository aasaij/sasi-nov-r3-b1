//Program to convert the alphabet into toggle case
#include <stdio.h>
int main(){
//	char ch = 'a';
//	printf("%d", ch);
//	char x = 97;
//	x-=32;
//	printf("%c", x);
	char ch;
	scanf("%c", &ch);
	if (ch>='A' && ch <='Z')
		ch = ch + 32;
	else if (ch >='a' && ch<='z')	
		ch = ch - 32;
	printf("%c", ch);
	return 0;
}

Let US C --> Yashwant Kanitkar

