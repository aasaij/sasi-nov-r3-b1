#include <stdio.h>
int main(){
//	float x = 10;
	int x = 10, y = 10;
//	char x = 10;
	switch(x){
		printf("You are all Engineers!");
		x = 12;
//		case 10.0:
//		case 10:
//		case 5 + y: // error
//		case y: //error
		case 8 + 2:
			printf("You are very silent in the class");
			break;
//		case 9 + 1: // error -- duplicate case value
//			printf("You are very silent in the class");
//			break;
			
		default:
			printf("This is testing");
	}
}