#include<stdio.h>

int main(void){

    int* p,i;

    i=0;
    p=&i;

    for(int j=0; j<10; j++){
        printf("%d\n",*p);

     (*p)++;
    }





return 0;
}
