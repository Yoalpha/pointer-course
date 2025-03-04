#include <stdio.h>

int main(){

// Initializing a variable a. a is stored in ram with an address.
// *p is a pointer.
// we assign a to 5 which changes the value stored in a's address to 5
// we assign p to the address of a
    int a;
    int *p;
    a = 5;
    p = &a;
    

// printing the value of a will return a
    printf("printing a %d \n", a);
// printing the address of a will return the address of a in ram
    printf("printing address of a %d \n", &a);
// printing the pointer will print the address of a 
    printf("printing p %d \n", p);
// printing the dereference of p will print what address is stored in p (which is a)
    printf("printing dereferencing of p %d \n", *p);

    
// we can change the value of a by changing the dereferenced pointer
    *p = 8;
// now the value of the address of which p is pointing to changed to 8
// this can be shown by printing the dereferenced value of p and the value stored in a
    printf("printing new value of *p %d \n", *p);
    printf("printing the new value of a %d \n", a);


}
















