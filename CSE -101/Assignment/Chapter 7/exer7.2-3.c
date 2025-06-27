#include<stdio.h>

void display(char *p){

	printf("%c",*p);
	p++;
	if(*p) display(p);
}
void main(){

	char str[80]="I HATE Exam.";
	display (str);
}
