#include<stdio.h>

void main(){

    int row,colum,i,j;

    printf("Enter row:");
    scanf("%d",&row);

    printf("Enter colum:");
    scanf("%d",&colum);

     printf("\n");

    for(i=1; i<=row; i++){

        for(j=1; j<=colum; j++){
            printf("*");
        }

        printf("\n");
    }


}
