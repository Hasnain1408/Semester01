#include<stdio.h>

void main(){

    int str[4][5];
    int i,j;



    for(i=0; i<4; i++)
        for(j=0; j<5; j++)
           str[i][j]=i*j;


     for(i=0; i<4; i++){
        for(j=0; j<5; j++)
          printf("%d\t",str[i][j]=i*j);

        printf("\n");
     }

}
