//Program to add two matrices
#include <stdio.h>
int main(){
	int m, n;
	scanf("%dx%d", &m ,&n); //3x3
	int a[m][n], b[m][n], res[m][n];
	//Getting values for Matrix A
	for (int r=0; r<m; r++ )
		for (int c = 0;c<n; c++)
			scanf("%d", &a[r][c]);
	//Getting values for Matrix B
	for (int r=0; r<m; r++ )
		for (int c = 0;c<n; c++)
			scanf("%d", &b[r][c]);	
	//Adding two matrices
	for (int r=0; r<m; r++ )
		for (int c = 0;c<n; c++)
			res[r][c] = a[r][c] + b[r][c];
	//printing the resultant matrix
	for (int r=0; r<m; r++ ){
		for (int c = 0;c<n; c++)
			printf("%4d", res[r][c]);	
		printf("\n");
	}
		
	return 0;
}

Attendance Link : https://bit.ly/PA-251124
Trainer : Tambi



