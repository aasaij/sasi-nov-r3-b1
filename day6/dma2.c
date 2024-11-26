//Program to demonstrate dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr;
    //allocating memory dynamically
    arr=(int *)malloc(20);
    //checking whether the memory is allotted
    if ( arr != NULL){
	    arr[0] = 100;
	    arr[1] = 200;
	    arr[2] = 300;
	}
	else
		printf("Insufficient Memory!");
    return 0;
}