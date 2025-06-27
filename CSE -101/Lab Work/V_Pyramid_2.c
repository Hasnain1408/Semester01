#include<stdio.h>

void main(){

    int line,n,i,j;

    printf("Enter Line numbers:");
    scanf("%d",&line);

    for(n=1; n<=line; n++){

        for(i=1; i<=line-n; i++){ //space
            printf(" ");
        }

         for(j=1; j<=2*n-1; j++){ //star
             if(j==1 || j==2*n-1)  printf("*");
             else              printf(" ");
        }

        printf("\n");
    }


}
