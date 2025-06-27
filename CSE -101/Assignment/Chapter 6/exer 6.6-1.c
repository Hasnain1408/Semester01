#include<stdio.h>


int main(){

    int i,*p,**q;

    p=&i;
    q=&p;

    **q=7;

    printf("i= %d\np= %p\nq= %p\n",**q,*q,q);


return 0;
}
