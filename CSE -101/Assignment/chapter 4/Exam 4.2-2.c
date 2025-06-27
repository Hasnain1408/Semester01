#include<stdio.h>

int m,e;

int pow();

void main(){

    e=2;
    m=3;

     printf("%d raised to the %d power is %d",e,m,pow());


}

int pow(){

   int power=1;

   for(; m>0; m--) power=power*e;

    return power;
}
