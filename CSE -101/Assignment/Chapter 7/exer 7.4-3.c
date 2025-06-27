#include<stdio.h>
#include<stdlib.h>

void main(int argc,char *argv[]){

	int a,b;
	char ch;
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	ch=atoi(argv[3]);
	if(ch=='A') printf("%d",a+b);
	else if(ch=='S') printf("%d",a-b);
	else if(ch=='M') printf("%d",a*b);
	else printf("%d",a/b);

}

