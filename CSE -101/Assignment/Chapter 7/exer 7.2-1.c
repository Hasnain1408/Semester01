#include<stdio.h>

long int fact(long int n){

	if(n==1) return 1;
	return n*fact(n-1);
}
void main(){

    long int x;
	scanf("%ld",&x);
	printf("%ld",fact(x));
}
