#include<stdio.h>

void prompt(char* msg, int* p);


int main(){
    int i;

    prompt("Enter a number: ", &i);
    printf("Your number is: %d\n",i);



return 0;
}

void prompt(char* msg, int* p){
    printf(msg);
    scanf("%d",p);
}
