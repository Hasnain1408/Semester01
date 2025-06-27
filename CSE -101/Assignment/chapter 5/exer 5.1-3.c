#include<stdio.h>

int main(void){

    float item[10];
    int i,j;

    for(i=0; i<10; i++){
        printf("Number%d:",i+1);
        scanf("%f",&item[i]);
    }

    for(i=0; i<10; i++){
        for(j=0; j<9-i; j++){
           if(item[j] > item[j+1]){
            float temp=item[j];
            item[j]=item[j+1];
            item[j+1]=temp;
           }
        }
    }

    for(i=0; i<10; i++){
        printf("%f \n",item[i]);
        ;
    }


return 0;
}

