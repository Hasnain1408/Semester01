#include<stdio.h>

float volume(float s1, float s2, float s3);

int main(){

    float vol;

    vol=volume(10.2,5.8,9);
    printf("%f\n",vol);


return 0;
}
float volume(float s1, float s2, float s3){

return s1*s2*s3;
}
