#include<stdio.h>

int main(void){

    int arr[3][3][3];
    int i,j,k,x;

    x=1;
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
           for(k=0; k<3; k++){
               arr[i][j][k]=x;
            x++;
           }

     for(i=0; i<3; i++)
        for(j=0; j<3; j++)
           for(k=0; k<3; k++)
              printf("%d\n",arr[i][j][k]);



return 0;
}
