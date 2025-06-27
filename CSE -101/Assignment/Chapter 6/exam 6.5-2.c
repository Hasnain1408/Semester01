#include<stdio.h>
#include<string.h>
char *p[][2]={
       "Red delicious","red","Golden delicious","yellow","Winesap","red","Gala","redish orange","Lodi","green","Mutsu","yellow",
       " ",""
    };

int main(void){

    char apple[80];
    int i;

    printf("Enter name of Apple: ");
    gets(apple);

    for(i=0; p[i][0]; i++){
        if(strcmp(p[i][0],apple)){
            printf("%s\n",p[i][1]);
        break;
        }

    }
    /







return 0;
}
