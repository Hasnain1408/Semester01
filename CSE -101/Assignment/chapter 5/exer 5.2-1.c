#include<stdio.h>

int main(void){

    char str[80];
    int i,j;

    printf("Enter a string: \n");
    gets(str);

    for(i=0; str[i] !='\0'; i++);

    for(j=i-1; j>=0; j--)
    printf("%c",str[j]);


return 0;
}
