#include<stdio.h>
#include<ctype.h>

int main(void){

    char *p,str[80];

    p=str;

    printf("Enter a string: \n");
    gets(str);

    while(*p) *p++ = toupper(*p); /
    puts(str);

    p=str;

    while(*p) *p++ = tolower(*p);
    printf("%s\n",str);





return 0;
}
