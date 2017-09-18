#include<stdio.h>
#include<stdlib.h>

// ./fact.out 5

void main(int argc, char *argv[]){
    // 2, ['./fact.out', '5']

    int n, fact;
    if(argc==2){
	n = atoi(argv[1]);
	// n = 5
	fact = n;
	printf("%d\n",n); 
	// 5
    }
    else
        n = 0;	
    for(int i=1; i<n; i++){ 
	// 1<5, fact = 5*1 =5
	// 2<5, fact = 5*2 = 10
	// 3<5, fact = 10*3 = 30
	// 4<5, fact = 30*4 = 120
	// 5<5, false
	
	fact = fact*i; 
    }
    // value of fact
    printf("%d\n",fact);

}
