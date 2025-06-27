#include<stdio.h>

void main(){

    int i,j;

    for(i=1; i<6; i++){
        for(j=0; j<1000; j++){
            printf("%d\n",j);

            if(j==5) break;
        }
        printf("\n");
    }


}
