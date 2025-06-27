#include<stdio.h>

void main(){ //4.1

    unsigned u;
    long l;
    short s;

    printf("Enter a unsigned:");
    scanf("%u",&u);

    printf("Enter a long:");
    scanf("%ld",&l);

    printf("Enter a short:");
    scanf("%hd",&s);

     printf("%u\t%ld\t%hd\n",u,l,s);



}
