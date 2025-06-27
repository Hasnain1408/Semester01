#include<stdio.h>

int main(void){

    char ch;

    for(int i=0; i<11; i++){
        printf("Enter a character:\n");
        ch=getche();
        printf("\nThe ASCII value of %c is %d\n\n",ch,ch);
    }

return 0;
}
