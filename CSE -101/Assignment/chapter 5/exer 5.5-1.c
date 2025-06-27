#include<stdio.h>
#include<string.h>

int main(void){

   char arr[][2][80]={
       "0","ONE",
       "1","TWO",
       "2","THREE",
       "3","FOUR",
       "4","FIVE",
       "5","SIX",
       "6","SEVEN",
       "7","EIGHT",
       "8","NINE",
       "9","TEN",
   };

   char str[2];

   printf("Enter a number: ");
   gets(str);

   int i=0;
   while(i<10){
       if(!strcmp(str,arr[i][0])){
        puts(arr[i][1]);
        break;
       }
     i++;
   }

}
