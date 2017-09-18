#include<stdio.h>

void main(int argc, char *argv[]){
    printf("Total no. of arguments passed: %d \n", argc);
    for(int i=0; i<=argc; i++){
        printf("%s,", argv[i]);    	
	}	
}
