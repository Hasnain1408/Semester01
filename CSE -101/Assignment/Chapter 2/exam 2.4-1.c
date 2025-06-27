#include<STDIO.H>

int main(void){

   int answer,count;

   for(count=1; count<=10; count++){
      printf("What is %d+%d*4?\n",count,count);
      scanf("%d",&answer);

        if(answer==count+count*4) printf("Right!\n");
        else printf("Sorry! You are wrong.\nThe answer is:%d\n",count+count*4);

   }


return 0;
}
