# include<stdio.h>

void main(){

   int marks[4][2][3];
   float cgpa[4][2];
   float gpa;

   int i,j,k;



   for(i=0; i<4; i++){
     printf("Batch %d\n",i+1);
       for(j=0; j<2; j++){
         printf("Student %d\n",j+1);
           for(k=0; k<3; k++){
             printf("Course %d:",k+1);
             scanf("%d",&marks[i][j][k]);

           }

       }

   }





    for(i=0; i<4; i++){

       for(j=0; j<2; j++){
            gpa=0;
         for(k=0; k<3; k++){

             if(marks[i][j][k] <41) gpa=gpa+1;
             else if(marks[i][j][k] <61) gpa=gpa+2;
             else if(marks[i][j][k] <81) gpa=gpa+3;
             else if(marks[i][j][k] <=100) gpa=gpa+4;


           }

            cgpa[i][j]=gpa/3;

       }

   }


    for(i=0; i<4; i++){

        printf("Batch %d\n",i+1);
           for(j=0; j<2; j++){
               printf("Student %d\t",j+1);
               printf("%.2f\n",cgpa[i][j]);



       }

   }

}












