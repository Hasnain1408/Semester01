#include<stdio.h>
#include<string.h>

int main(void){

    char str[80],
         bigstr[1000];

    printf("Enter string: \n");
    gets(str);

    while(strcmp(str, "quit")){

         strcat(bigstr,str);
         printf("Enter string: \n");
         gets(str);


    }

    printf("%s",bigstr);






return 0;
}
