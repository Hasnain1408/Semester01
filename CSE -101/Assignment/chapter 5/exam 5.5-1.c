#include<stdio.h>
#include<string.h>







void main(){

    char name[10][20];
    int i,num;

    for(i=0; i<10; i++){
        printf("%d",i+1);

        gets(name[i]);
    }

    do{
        printf("String No?\n");
        scanf("%d",&i);

        i--;

        if(i>=0 && i<10) printf("%s",name[i]);
    }while(i>=0);



}





