#include<stdio.h>

struct student{
    char name[20];
    int roll;
    float cg;
};

void main(){
   struct student s[8];

   for(int i=0; i<8; i++){

    scanf("%s %d %f",s[i].name,&s[i].roll,&s[i].cg);

    printf("%s %d %f",s[i].name,s[i].roll,s[i].cg);

   }

}
