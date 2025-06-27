#include<stdio.h>

int main(void){

    int min=256;
    char ch;

    int i=0;
    while(i<10){
        printf("Enter a character:");
        ch=getche();
        printf("\n");

        if(ch<min) min=ch;
     i++;
    }

    printf("Earliest alphabet is: %c",min);


return 0;
}
