#include<stdio.h>

void main(){

    int line,n,i;

    scanf("%d",&line);

    for(n=1; n<=line; n++){
        for(i=1; i<=line-n; i++){ //space
            printf(" ");
        }

        for(i=1; i<=n; i++){//star
            printf("*");
        }
        printf("\n");
    }

    for(n=1; n<line; n++){
        for(i=1; i<=n; i++){
            printf(" ");
        }

        for(i=1; i<=line-n; i++){
            printf("*");
        }
        printf("\n");
    }








}
