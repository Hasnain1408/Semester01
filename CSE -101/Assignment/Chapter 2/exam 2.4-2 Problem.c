#include<STDIO.H>

int main(void){

    int num,prime_checker;

    printf("Enter a number to test:");
    scanf("%d",&num);

    for(int i=2; i<num/2; i++){
       if((num%i)!=0) printf("%d is Prime!.\n");
       else printf("It is not Prime.\n");
    }



return 0;
}
