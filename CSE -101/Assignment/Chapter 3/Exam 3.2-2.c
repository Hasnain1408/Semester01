#include<stdio.h>

void main(){

    int count,answer,chance,right;

    for(count=1; count<11; count++){
        printf("What is %d+%d?\n",count,count);
        scanf("%d",&answer);

        if(answer==count+count)  printf("Right!\n");
        else{
             printf("Sorry!You are wrong.\nTry again.");
             right=0;

            for(chance=1; chance<=3 && !right; chance++){
                  printf("What is %d+%d?",count,count);
                  scanf("%d",&answer);

                 if(answer==count+count){
                    printf("Right!\n");

                    right=1;
                 }
             }

             if(!right) printf("The answer is %d\n",count+count);
        }
    }



}
