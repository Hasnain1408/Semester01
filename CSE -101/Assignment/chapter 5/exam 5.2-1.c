#include<stdio.h>

void main(){

    char str1[80],str2[80];
    int i;

    printf("Enter a string: ");
    gets(str1);
    printf("Enter a string: ");
    gets(str2);

    printf("%d %d\n",strlen(str1),strlen(str2));

    i=strcmp(str1,str2);
    printf("%d\n",i);


    strcat(str1," ");
    strcat(str1, str2);
    printf(str1);
    printf("\n");


    strcpy(str1,str2);
    printf(str1);








}
