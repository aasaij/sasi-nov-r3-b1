
//& --> Address operator
//* --> Indirection or dereferencing or value at operator
//->    structure pointer member accessing operator

#include <stdio.h>

int main(){
    int x = 10;
    printf("%p\n", &x);
    printf("%d", *(&x));    
    return 0;
}

//declaration of pointer
//
//<datatype> *<pointer_name>;


