#include<stdio.h>



void main(){


    int serverUser[5][2]={
        1,13,
        3,44,
        2,76,
        4,12,
        5,15,
    };
    int i,server;

    printf("Enter Server: ");
    scanf("%d",&server);

    for(i=0; i<5; i++){
        if(server==serverUser[i][0]){
            printf("%d No. Server have %d Users\n",i+1,serverUser[i][1]);
            break;
        }

    }

    if(i == 5) printf("Server not listed !!\n");









}
