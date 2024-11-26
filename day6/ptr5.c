#include <stdio.h>

int main(){
    int x = 10;
    int *ptr = NULL; //pointer declaration
    ptr = &x;
    printf("%p\n", ptr);
    *ptr++ = 100;
    x++;
    printf("%p\n", ptr);
    printf("%d %d", *ptr, x);  // printing the value of x   
    
    return 0;
}
