#include<stdio.h>

void assign_value(int* p);


int main(){

    int i,*p;

    p=&i;

    assign_value(p);


    printf("i= %d\n",i);


return 0;
}

void assign_value(int* p){
    *p=-1;

}

