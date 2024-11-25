//Program to print the following pattern
/*
5
1   5
 2 4
  3
*/
#include <stdio.h>

int main(){
	int n,i,j ;
	scanf("%d", &n);
	for (i = 1, j = n; i<=n/2; i++, j--)
		printf("%*d%*d\n",i,i,j-i,j);
	printf("%*d", i,i);
	return 0;
}