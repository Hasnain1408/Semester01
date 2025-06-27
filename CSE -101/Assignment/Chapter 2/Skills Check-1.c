#include<stdio.h>

  int main(void){
    int x,count;
    int Lucky_num=11;

    count=0;

    for( int i=1; i<=10 ; i++ ){
     printf("Enter a Number :");
     scanf("%d",&x);
     count=count+1;
     if(x==Lucky_num){
         printf("GREAT !!\nYou chose the Luckey Nember\n");
         printf("Number of Count %d\n",count);

         break;
     }else{
             printf("Sorry! You are wrong.\n");
             printf("\tCount Num: %d\t\t Rest: %d\n",count,(10-count));
         if(count==10){
             printf("Run out of Counts\n");
         }
     }
    }

  return 0;
  }
