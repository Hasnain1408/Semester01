#include<stdio.h>
#include<stdlib.h>

void main(int argc,char *argv[]){

	char c1,c2;
	c1=atoi(argv[1]);
	c2=atoi(argv[2]);
	if(c1>c2) printf("%c",c1);
	else printf("%c",c2);
}
