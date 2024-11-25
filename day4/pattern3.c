//Program to print the following pattern
/*
5
12345	5
 1234	4
  123	3
   12	2
    1	1
*/
#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for (int r = n; r>=1; r--){
		printf("%*s",n-r,"" );
		for (int c = 1; c<=r; c++)
			printf("%d", c);
		printf("\n");
	}
	return 0;
}