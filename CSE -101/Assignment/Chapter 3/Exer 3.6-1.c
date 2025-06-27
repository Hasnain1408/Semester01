#include<stdio.h>

int main(void){
    int i,j,prime;


    for(i=2; i<1000; i++){

        prime=1;
        for(j=2; j<=i/2; j++){
            if((i%j)==0) prime=0;
        }

       if(prime==1) printf("%d is a prime number!\n",i);

    }


return 0;
}
