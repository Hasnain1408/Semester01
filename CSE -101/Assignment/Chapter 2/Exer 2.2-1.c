#include<stdio.h>

int main(){

   int num1,num2;
   int choice;

    printf("Enter first number:");
    scanf("%d",&num1);

    printf("Enter second number:");
    scanf("%d",&num2);

    printf("1:Sum 2:Product\n");
    scanf("%d",&choice);

    if(choice==1) printf("Sum is %d\n",num1+num2);
    if(choice==2) printf("Product is %d\n",num1*num2);





return 0;

}
