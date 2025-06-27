#include<stdio.h>

int main(){

    char *p,str[80]="This is a test.";

    p=str;

    printf("%c\n",str[2]);
    printf("%c\n",*(p+2));


return 0;
}



