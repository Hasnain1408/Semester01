#include<stdio.h>

int recurse(char ch){

	printf("%c",ch);
	if(ch == 122) return 0;
	recurse(ch+1);
}
main()
{
	char ch;
	ch='a';
	recurse(ch);
	return 0;
}
