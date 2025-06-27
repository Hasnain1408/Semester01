#include<stdio.h>

void main(){

    int line,n,i,j;

    printf("Enter Line numbers:");
    scanf("%d",&line);

    for(n=1; n<=line; n++){

        for(i=1; i<=line; i++){
            printf("*");
        }


        printf("\n");
    }


}
