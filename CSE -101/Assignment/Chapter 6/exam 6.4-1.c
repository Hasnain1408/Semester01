#include<stdio.h>

int main(void){

    char *p="stop";
    char str[80];
   // int *a={1,2,3,4,5};
    //printf(" %d\n",a);

    do{
    printf("Enter a string: ");
    gets(str);
    }while(strcmp(p,str));


return 0;
}
