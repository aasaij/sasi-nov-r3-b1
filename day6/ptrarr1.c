#include <stdio.h>
//Pointer and array
int main(){
  int arr[] = {10,20,30,40,50};
  int *ptr;
  ptr = &arr[2]; // ptr = arr+2
  ptr++;
  arr++;
  printf("%d %d", ptr[0], ptr[-1]);
  printf("\n%d %d", arr[0], arr[-1]);
//  printf("%d", *arr);
    return 0;
}