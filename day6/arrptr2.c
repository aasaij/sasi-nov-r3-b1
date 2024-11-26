//Program to display array elements using pointer
#include <stdio.h>

int main(){
	int arr[6] = {10,20,34,22,11,66}, *ptr;
	int size = sizeof(arr)/sizeof(arr[0]);
	ptr = arr;
	//Traversing array elements using pointer ptr
	for (int i = 0; i<size; i++)
		printf("%d ", *ptr++);
	return 0;
}
