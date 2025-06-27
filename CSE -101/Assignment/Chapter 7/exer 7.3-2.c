#include<stdio.h>

void prompt(char *msg,char *p);

void main(){

	char str[40];
	prompt("enter a msg : ",str);
	printf("Your msg is %s",str);
}

void prompt(char *msg,char *p){

	printf(msg);
	scanf("%s",p);
}
