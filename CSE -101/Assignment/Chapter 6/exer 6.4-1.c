#include<stdio.h>


int main(){

    char *p[3]={
        "One","Two",
        "Three"
    };


    printf("%s %s %s\n",p[0],p[1],p[2]);
    printf("%s %s %s\n",p[0],p[2],p[1]);
    printf("%s %s %s\n",p[1],p[0],p[2]);
    printf("%s %s %s\n",p[1],p[2],p[0]);
    printf("%s %s %s\n",p[2],p[0],p[1]);
    printf("%s %s %s\n",p[2],p[1],p[0]);






return 0;
}

