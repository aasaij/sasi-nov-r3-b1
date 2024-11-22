//while statement
//Syntax
//	while (<condition>){
//		<statements>
//	}

//Program to reverse a number
#include <stdio.h>
int main(){
	long long int n, rev=0;
	scanf("%lld", &n);
	while(n!=0){
		int remainder = n % 10;
		rev = rev * 10 + remainder;
		n = n / 10;
	}
	printf("%lld\n", rev);
	return 0;
}

Attendance Link : https://bit.ly/RA-221124
Trainer : Tambi