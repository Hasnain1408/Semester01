#include<STDIO.H>

int main(void){

   float num;
   int choice ;

   printf("1:Feet to Meter , 2:Meter to Feet\n");
   printf("Enter choice:");
   scanf("%d",&choice);

   if(choice==1){
     printf("Enter number of feet:");
     scanf("%f",&num);
     printf("Meters:%f",num/3.28);

   }
   else{
     printf("Enter number of meters:");
     scanf("%f",&num);
     printf("Feet:%f",num*3.28);

   }

return 0;
}
