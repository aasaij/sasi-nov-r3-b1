//Program to print even numbers in reverse order
#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i = n%2?n-1:n; i>=1; i-=2)
		printf("%d ", i);
	return 0;
}