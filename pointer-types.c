#include <stdio.h>

int main(){

    int a = 1025;
    int *p;
    p = &a;
    
    printf("size of int: %d \n", sizeof(int));
    printf("address of int = %d | value of int = %d  \n", p, *p);

// printing the address and value of p+1
    printf("address of p+1 = %d | value at p+1 = %d \n", p+1, *(p+1));
    
    char *p0; // char pointer
    p0 = (char*)p; // type casting. turning int pointer into char pointer to use the same address

    printf("size of char: %d \n", sizeof(char));
    printf("address of char = %d | value of char = %d \n", p0, *p0);

// the value of char is 1 because the size of a char is only 1 byte so it takes the first byte
// of the int value during type casting which is 1 from 1025   


// printing the address and value of p+1 that is typecasted to a char
    printf("address of p0+1 = %d | value at p0+1 = %d \n", p0+1, *(p0+1));

// the address will be the same as p+1 and the value of p0+1 will be 4 because:
// 1025 -> 00000000 00000000 00000100 00000001 
// the last byte is 1, therefore the typecast of p0 is 1, when you increment p0 by 1,
// it goes to the next byte because chars' size is one byte 

// declaring void pointer
    void *p1; // a void pointer does not have a specefied data type
    p1 = p; // a void pointer does not need type casting

// a void pointer can only store the address, the pointer cannot be dereference or pointer
// arithmetic cannot be performed on a void pointer.    

   

}








