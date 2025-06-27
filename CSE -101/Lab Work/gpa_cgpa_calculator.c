# include<stdio.h>

float gpa_calculator(float marks);
float cgpa_calculator(float gpa,int c);
void report(char name, int marks, float gpa, float cgpa);

void main(){

   int b,s,c;
   int i,j,k,m;


     printf("Enter number Batch: ");
   scanf("%d",&b);
     printf("Enter number students: ");
   scanf("%d",&s);
     printf("Enter number Course: ");
   scanf("%d",&c);


   int marks[b][s][c];
   char name[b][s][50];
   float gpa[b][s][c];
   float cgpa[b][s];





  for(i=0; i<b; i++){
     printf("Batch %d\n",i+1);
       for(j=0; j<s; j++){
         printf("Student %d\n",j+1);
           for(k=0; k<c; k++){
             printf("Course %d:",k+1);
             scanf("%d",&marks[i][j][k]);

              if(marks[i][j][k]>=0 && marks[i][j][k] <101){
                marks[i][j][k]=marks[i][j][k];
             }
             else{
                printf("Invalid Input!\n");

              k--;
             }

           }

       }

   }


   for(i=0; i<b; i++)
      for(j=0; j<s; j++)
        for(k=0; k<c; k++)
           gpa[i][j][k]=gpa_calculator(marks[i][j][k]);


   for(i=0; i<b; i++)
      for(j=0; j<s; j++)
         cgpa[i][j]=cgpa_calculator(gpa[i][j][0],c);     //cgpa_calculator(float gpa,int c);


    for(i=0; i<b; i++)
        for(j=0; j<s; j++)
           for(k=0; k<c; k++)
               report(name[i][j],marks[i][i][k],gpa[i][j][k],cgpa[i][j]);


}



float gpa_calculator(float marks){

      float gpa;

             if(marks <41) gpa=1;
             else if(marks <61) gpa=2;
             else if(marks <81) gpa=3;
             else if(marks <=100) gpa=4;




return gpa;
}

float cgpa_calculator(float gpa,int c){

    int m;
    float cgpa;

    for(m=0; m<c; m++,gpa++) {
            cgpa=cgpa+gpa;
    }

        cgpa=cgpa/c;


return cgpa;
}

void report(char name, int marks, float gpa, float cgpa){

    int i,k;


            printf("Student Name: %s\n",name);
            printf("Batch %d\n",i+1);

            for(k=0; k<3; k++){
                printf("Course %d: %d %f\n",k+1,marks[i][j][k],gpa[i][j][k]);
            }


             printf("CGPA: %0.2f\n",cgpa);

         }


}








