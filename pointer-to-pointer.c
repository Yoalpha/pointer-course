#include <stdio.h>

int main(){

    int x;
    x = 5;
    int *p;
    p = &x;

// declairing a pointer to a pointer
    int **q; // double star indicares that it points to a pointer
    q = &p;
    
    int ***r; // this is indicating that r can make 3 dereferencesi
    r = &q;
    
    printf("printing p %d\n", p); // this will print the address of x
    printf("printing *p %d\n", *p); // this will dereference p and print the value of x
    
// this will print the dereferenced value of q which is the address of p
    printf("printing *q %d\n", *q);
    
// this will dereference q twice so it goes to the address of p and p points to the address of x 
    printf("printing **q %d\n", **q );

// the same applies for r but it is another step
    printf("printing **r %d\n", **r);
    printf("printing ***r %d\n", ***r);
    
// structure ->
// r -> q -> p -> x(integer variable) and r, q and p are all pointers
// the amount of times that r dereferences will point to the address of each pointer

}







