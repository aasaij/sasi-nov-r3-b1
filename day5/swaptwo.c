//Program to swap two variables
#include <stdio.h>
int main(){
	int x, y;
	scanf("%d %d", &x, &y);
	printf("Before swapping \n");
	printf("X = %d \t y = %d\n", x, y);
	//Method 1
//	int temp = x;
//	x = y;
//	y = temp;
//	Method 2
//	x = x + y;
//	y = x - y;
//	x = x - y;
//	Method 3
//	x = x ^ y;
//	y = x ^ y;
//	x = x ^ y;
	//Method 4
	x = (x+y) - (y=x);
	printf("After swapping \n");
	printf("X = %d \t y = %d\n", x, y);
	
	return 0;
}