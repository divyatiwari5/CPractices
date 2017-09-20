/**
This program demonstrates a simple addition of two numbers using call by value and reference.
*/

#include<stdio.h>
 
int add(int fn, int sn, int sum){
    sum = m+n;
    return sum;
}

int add_ref(int* m, int* n, int* t){
    *t = *m+*n;	

}

void main(){
    int a, b, x;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("\nEnter value of b: ");
    scanf("%d", &b);
    x = add(a, b, x);	
    printf("Sum is: %d", x);
    add_ref(&a, &b, &x);
    printf("Sum is: %d", x);
}


