#include<stdio.h>

void main(){

    char ch;


    do{
     printf("\nEnter a character,q to quit:");
     ch=getche();
     printf("\n");

     switch(ch){
     case 'a':  printf("Now is ");

     case 'b':  printf("the time ");

     case 'c':  printf("for all good men ");

     case 'd': printf("The summer soldier.");

     }
    }while(ch!='q');



}
