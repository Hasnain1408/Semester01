#include<stdio.h>

void main(){

    int n;

    printf("How many days in this month?\n");
    scanf("%d",&n);

    int temp[n],min,max,total=0,avg;

    for(int i=0; i<n; i++){
        printf("Enter noonday temparature for day %d:",i+1);
        scanf("%d",&temp[i]);

    }

    for(int i=0; i<n; i++){
        total=total+temp[i];
    }

       avg=total/n;
       printf("Average temperature:%d\n",avg);

       min=200;
       max=0;

    for(int i=0; i<n; i++){
        if(temp[i]<min) min=temp[i];
        if(temp[i]>max) max=temp[i];
    }

       printf("Minimun Temperature: %d\nMaximum Temperature: %d\n",min,max);





}
