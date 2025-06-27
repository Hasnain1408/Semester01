#include<stdio.h>

void main(){

    char ch;

    for(int i=1; i<1000; i++){
        if(!(i%6)){
            printf("%d, more?(y/n)\n",i);

            ch=getche();

            if(ch=='n') break;

            printf("\n");
        }
    }


}
