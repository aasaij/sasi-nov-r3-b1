//Program to get string from the user
#include <stdio.h>

int main(){
	char name[20];
	scanf("%[^\n]s", name);
//	printf("Good afternoon %s", name);
	printf("%s", name);
	
	return 0;
}