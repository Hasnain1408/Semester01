#include<stdio.h>

int main(void){

    int *p,q;

    q=1;
    p=&q;

    printf("%d %p\n",q,p);

    *p++;

    printf("%d %p\n",q,p);




return 0;
}
