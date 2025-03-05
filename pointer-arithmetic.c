#include <stdio.h>

int main(){

    int a = 10;
    int *p;
    
    p = &a;
    
// pointer arithmetic


// printing the pointer- should print out the address of a
    printf("address of p is: %d \n", p);

// printing the value at address p
    printf("value at address p: %d \n", *p);

//printing the size of an integer
    printf("size of an int: %d \n", sizeof(int));

// incrementing the pointer address by 1. it should be increment the pointer address by 4 bytes
    printf("address of p+1 is: %d \n", p+1);

//printing the value of address p + 1 will result in a garbage value because nothing is defined
    printf("value at address p+1: %d", *(p+1));


}













