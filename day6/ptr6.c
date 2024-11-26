#include <stdio.h>

int main(){
    char x = 'A';
    char *ptr = NULL; //pointer declaration
    ptr = &x;
    printf("%p\n", ptr);
    *ptr++ = 100;
    x++;
    printf("%p\n", ptr);
    printf("%c %c", *ptr, x);  // printing the value of x   
    
    return 0;
}
