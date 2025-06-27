#include<stdio.h>

int main(void){

    int arr[3][3][3];
    int i,j,k,
          sum=0;

    int  x=1;
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
           for(k=0; k<3; k++){
               arr[i][j][k]=x;
            x++;
           }
     for(i=0; i<3; i++)
        for(j=0; j<3; j++)
           for(k=0; k<3; k++)
             sum+=arr[i][j][k];

     printf("%d\n",sum);


return 0;
}
