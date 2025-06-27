#include<stdio.h>
#include<string.h>

int main(void){

    char str1[]="Pointer is fun to Use";
    char str2[80],*p1,*p2;

    p1=str1+strlen(str1)-1;
    p2=str2;

    while(p1 >= str1)
        *p2++ = *p1--; /

    *p2='\0';

    puts(str2);





return 0;
}
