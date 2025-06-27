#include<stdio.h>

void f1(void);

int count;//global variable

void main(){

    count=10;

    f1();

     printf("count in main() is :%d\n",count);

}

void f1(void){
    int count;//local

    count=180;

     printf("count in f1() is :%d\n",count);

}



