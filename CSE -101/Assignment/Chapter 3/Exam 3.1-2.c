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

     if(ch == 'a') printf("%d\n",a+b);
     else if(ch == 's') printf("%d\n",a-b);
     else if(ch == 'm') printf("%d\n",a*b);
     else  if(ch =='d' && b!=0) printf("%d\n",a/b);





}
