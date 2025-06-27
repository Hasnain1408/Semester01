#include<stdio.h>

void main(){

    double i;

    for(i=1.0; i<11.3; i++){

         printf("The square root of %lf is %lf\n",i,sqrt(i));
         printf("Whole number part: %d\n",(int)sqrt(i));
         printf("Fractional part:%lf\n",sqrt(i)-(int)sqrt(i));
    }



}
