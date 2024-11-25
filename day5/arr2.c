//Program to print array elements
#include <stdio.h>
int main(){
	int arr[10];
	//Getting array elements from the user
	for (int index = 0; index<10; index++ )
//		scanf("%d", &arr[index]);	
	//printing the array elements
	for (int index = 0; index<10; index++ )
		printf("%d ", arr[index]);	
	return 0;
}