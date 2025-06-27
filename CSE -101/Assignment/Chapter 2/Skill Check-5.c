#include<stdio.h>

int main(void){



    for(int i=1; i<=100 ; i=i+5){
       for(int j=i; j<=i+4; j++){
          printf("%d\t",j);

       }
        printf("\n");
    }



return 0;
}
