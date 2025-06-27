#include<stdio.h>

int main(void){

    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    for(int i=num; i>=0; i--){
       printf("%d\n",i);
    }
    printf("\a");

return 0;
}
