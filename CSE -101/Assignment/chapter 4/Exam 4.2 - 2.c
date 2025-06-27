#include<stdio.h>

int pow(int e,int m);

void main(){

     int p,q;

     scanf("%d",&p);
     scanf("%d",&q);



     printf("%d raised to the %d power is %d",p,q,pow(p,q));


}

int pow(int e,int m){

   int power=1;

   for(; m>0; m--) power=power*e;

    return power;
}




