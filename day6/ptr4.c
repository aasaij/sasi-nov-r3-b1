#include <stdio.h>
//Printing the size of pointers
int main(){
	printf("%lu %lu %lu", sizeof(int*), sizeof(char*), sizeof(double*));
	return 0;
}