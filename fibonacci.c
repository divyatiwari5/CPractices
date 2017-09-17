#include<stdio.h>

void fib(int num){
    /**
        This function prints the fibonacci series till "num".
        num: value till which we have to print fibonacci
    */

    int m=0, n=1, o;
    // m: first element of fibonacci series
    // n: second element of fibonacci series

    printf("Printing fibonacci series upto %d: \n", num);

    // Initial 2 series element printed outside loop
    printf("%d, %d, ", m, n);	

    for(int j=0; j<num-3; j++) {
        /**
	    loop will run num-3 times 
        */

        o = m + n;
        printf("%d, ", o);
        m = n;
        n = o;
    }

    // Printing last element outside loop to remove `,`
    printf("%d", m+n); 
}

int main() {
    int i;

    printf("Enter upto what no. you want to print fibonacci series: ");
    scanf("%d", &i);
    fib(i);
    return 0;
}
