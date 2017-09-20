#include<stdio.h>

void main(){
    int a=10, b=20, c=30;
    int *x,*y;
    int **p, **q;

    // *x = &a; <- Wrong
    printf("x = &b\n*y=a\np=&x\n*q=y\n");
    x = &b; // Assigning address to pointer variable
    y = &a; // Assigning value to dereferencing pointer variable

    // *p = &x; <- Wrong
    p = &x; // Assgning address to pointer
    // q = &&a; <- Wrong
    *q = y; // Assigning value 

    // Printing value
    printf("%d\n", a);

    // Printing address
    printf("&a -> %p\n", &a);
    printf("y -> %p\n", y);

    printf("x -> %p\n", x);


    // Printing value by pointer
    printf("%d\n", *x); 
    printf("%d\n", *y);

    // Printing address of double pointer
    // Error-> printf("&&a -> %p\n", &&a); 
    printf("&x -> %p\n", &x);
    printf("&y -> %p\n", &y);
    printf("p -> %p\n", p);
    printf("q -> %p\n", q);
    printf("*p -> %p\n", *p);
    printf("*q -> %p\n", *q);

}
