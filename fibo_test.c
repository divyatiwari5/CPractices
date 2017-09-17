#include<stdio.h>
#include<stdlib.h>

void main(int argc, char *argv[]){
    int a=0, b=1, c, n=5;
    if(argc==2)
        n = atoi(argv[1]);
    else
        n = 0;

    if(n>1)
        printf("%d, %d, ", a, b);
    else if(n==0)
        printf("%d", a);
    else if(n==1)
        printf("%d", b);

    for(int i=2; i<n; i++){	
        c = a + b;
	if(i==n-1) printf("%d", c);
	else printf("%d, ", c);
        a = b;
        b = c;
    }
}
