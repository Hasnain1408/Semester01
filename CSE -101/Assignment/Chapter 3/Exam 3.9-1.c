#include<stdio.h>

void main(){

    int a,b;
    char ch;

    printf("Do you want to:\n");
    printf("ADD,SUB, MUL, DIV?\n");

     do{

     printf("Enter first letter:");
     ch=getche();

     }while(ch!='a' && ch!='s' && ch!='m' && ch!='d');
     printf("\n");

     printf("Enter first number:");
     scanf("%d",&a);

     printf("Enter second number:");
     scanf("%d",&b);

     switch(ch){
     case 'a':  printf("%d\n",a+b);
     break;
     case 's':  printf("%d\n",a-b);
     break;
     case 'm':  printf("%d\n",a*b);
     break;
     case 'd': printf("%d\n",a/b);

     }









}
