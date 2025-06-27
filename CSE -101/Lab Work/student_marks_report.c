#include<stdio.h>

void main(){

    int std[3][3],total[3];
    int i,j,max;

    for(i=0; i<3; i++){
            printf("Student %d\n",i+1);

        for(j=0; j<3; j++){
            printf("course %d: ",j+1 );
            scanf("%d",&std[i][j]);
            total[i]=total[i]+std[i][j];


        }
    }

      printf("\t\tCourse%d\tCourse%d\tCourse%d\tTotal\n",1,2,3);
      for(i=0; i<3; i++){
            printf("Student %d\t",i+1);
        for(j=0; j<3; j++){

           printf("%d\t",std[i][j]);

        }
        printf("%d",total[i]);

        if(total[i] > total[i+1]) max=i;

        printf("\n");
    }
       printf("Student%d got maximum %d mark\n",max+1,total[max]);

}
