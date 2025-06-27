#include<stdio.h>
#include<string.h>

char words[][2][20]={
    "dog","Hund",
    "no","neih",
    "year","jahr",
    "child","kidd"
    "","",
};



void main(){

    char english[80];
    int i;

    printf("Enter english word: ");
    gets(english);

    i=0;
    while(strcmp(english,"")){
        if(!(strcmp(english,words[i][0]))) {
                printf("%s\n",words[i][1]);
           break;
        }
      i++;
    }

    if(!(strcmp(english,""))) printf("Not in Dictionary.\n");








}
