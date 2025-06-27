#include<stdio.h>

void soundspeed(double distance);



int main(void){ //4.2-2

    double distance;

    printf("Enter distance in feet: ");
    scanf("%lf",&distance);

    soundspeed(distance);




return 0;
}

void soundspeed(double distance){

     printf("Travel time: %f",distance/1129);
}
