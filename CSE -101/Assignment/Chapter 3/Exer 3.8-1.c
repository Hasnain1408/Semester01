#include<stdio.h>

int main(void){

    for(int i=1; i<100; i++){
        if((i%2)==0) continue;

        printf("%d is odd!\n",i);
    }


return 0;
}
