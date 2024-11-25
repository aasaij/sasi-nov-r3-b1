//Program to reverse an array
#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	//Getting array elements from the user
	for (int i = 0; i<n;scanf("%d", &arr[i++]));
	//Reversing the array elements
	for (int i = 0, j = n-1; i<j;i++, j--)
		arr[i] = (arr[i]+arr[j]) - (arr[j]= arr[i]);
	//Printing reversed array elements
	for (int i = 0; i<n;printf("%d ", arr[i++]));
	return 0;
}