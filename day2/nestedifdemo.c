//program to demonstrate nested if..
#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	if (n % 2 == 0){
		if ( n % 3 == 0){
			printf("Divisable by 2 & 3");
		}
		else{
			printf("Divisable only by 2");
		}
	}
	else if (n % 3 == 0){
		printf("Divisable only by 3");
	}
	else{
		printf("Neither divisable by 2 nor 3");
	}
	return 0;
}


//1. Divisable by 2 & 3
//2. Divisable by only 2
//3. Divisable by only 3
//4. Neither divisable by 2 nor 3