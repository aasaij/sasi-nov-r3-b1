
//& --> Address operator
//* --> Indirection or dereferencing or value at operator
//->    structure pointer member accessing operator

#include <stdio.h>

int main(){
    int x = 10;
    int *ptr = NULL; //pointer declaration
    ptr = &x;
    *ptr = 100;
    x++;
    
    printf("%d %d", *ptr, x);  // printing the value of x   
    
    return 0;
}

//declaration of pointer
//
//<datatype> *<pointer_name>;


