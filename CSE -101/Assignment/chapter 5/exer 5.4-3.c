#include<stdio.h>


void main(){

    int arr[10][3];
    int i;

    i=0;
    while(i<10){
        arr[i][0]=i+1;
        arr[i][1]=(i+1)*(i+1);
        arr[i][2]=(i+1)*(i+1)*(i+1);
    i++;
    }

    i=0;
    while(i<10){
        printf("%d\t%d\t%d\n",arr[i][0],arr[i][1],arr[i][2]);
    i++;
    }



}
