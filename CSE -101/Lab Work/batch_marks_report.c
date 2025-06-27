#include<stdio.h>

void main(){

    int marks[4][3][2];
    int i,j,k;

    for(i=0; i<4; i++){
            printf("%d Year:\n",i+1);
        for(j=0; j<3; j++){
             printf("%d Course:\n",j+1);
          for(k=0; k<2; k++){
               printf("Student %d:",k+1);
               scanf("%d",&marks[i][j][k]);


          }

        }
    }

    for(i=0; i<4; i++){
        for(j=0; j<3; j++){
          for(k=0; k<2; k++){
               printf("Batch:%d Student %d Marks: %d\n",k+1,marks[i][j][k]);



          }

        }
    }


}
