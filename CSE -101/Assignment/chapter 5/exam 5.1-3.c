#include<stdio.h>

void main(){

     char mess[80];

     printf("Enter message\n");

     for(int i=0; i<80; i++){
        mess[i]=getche();
        if(mess[i]=='\r') break;
     }
        printf("\n");
        //printf("");
       // printf("\t");


     for(int i=0; mess[i]!='\r'; i++){
        printf("%c",mess[i]);
     }
}
