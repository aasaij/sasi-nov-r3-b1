#include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr;
    //allocating memory dynamically
    arr=(int *)calloc(5,4);
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

Attendance : https://bit.ly/SA-261124