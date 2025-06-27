#include<stdio.h>

int main(void){

    double gallon;
    int num,i;

     printf("How many times you want to repeat:");
     scanf("%d",&num);

     i=0;
     do{
         printf("Enter gallons:");
         scanf("%lf",&gallon);

          printf("%lf gallons is %lf liters\n\n",gallon,gallon*3.7854);

     i++;
     }while(i<num);


return 0;
}
