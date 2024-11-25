//Program to print the following pattern
/*
5
12345	5
1234	4
123		3
12		2
1		1
*/
#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for (int i = n; i>=1;i-- ){
		for (int j = 1; j <=i; j++)
			printf("%d", j);
		printf("\n");
	}
	return 0;
}