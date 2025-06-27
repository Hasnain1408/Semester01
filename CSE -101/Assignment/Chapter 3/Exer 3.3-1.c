#include<stdio.h>

void main(void){

    int num,i;
    float distance,speed;

    printf("How many times do you want to calculate?\n");
    scanf("%d",&num);

    i=0;
    do{
        printf("Enter Distance in meters:");
        scanf("%f",&distance);

        printf("Enter avg. speed in m/s:");
        scanf("%f",&speed);

      printf("Driving time: %f seconds.\n",distance/speed);

      i++;
    } while(i<num);



}
