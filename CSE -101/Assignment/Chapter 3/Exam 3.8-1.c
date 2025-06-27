#include<stdio.h>

void main(){

    int total,i,j;

    do{
        printf("Enter next number (0 to stop):");
        scanf("%d",&i);

        printf("Enter number again:");
        scanf("%d",&j);

        if(i != j){
            printf("Mismatch.\n");
            continue;
        }
        total=total+1;
    }while(i);

    printf("Total is %d",total);



}
