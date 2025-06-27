#include<stdio.h>

int main(void){

    char str[80];

    printf("Enter a string: \n");
    gets(str);

    int i=0;
    while(str[i]){
        printf("%c",str[i+1]);
     i++;
    }




return 0;
}
