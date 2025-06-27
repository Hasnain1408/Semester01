#include<stdio.h>


int main(){

    char *p[3]={
        "yes","no",
        "Maybe.Rephrase the question"
    };
    char str[80];

    printf("Enter a string: ");
    gets(str);

    printf(p[strlen(str)%3]);




return 0;
}
