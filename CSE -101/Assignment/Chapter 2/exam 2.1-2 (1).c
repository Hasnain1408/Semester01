#include<STDIO.H>

int main(void){

    int answer;

    printf("What is 10+14?\n");
    scanf("%d",&answer);

    if(answer==24) printf("Right!\n");
    else{
      printf("Sorry! You are wrong.\n");
      printf("The answer is 24.\n");
    }


return 0;
}
