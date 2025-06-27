#include<stdio.h>

int main(void){

    int* p;
    double q,temp;

    temp=123.456;

    p=&temp;
    q=*p;

    printf("%lf\n",q);

return 0;
}
