#include<stdio.h>

int* p(int x);
int count;


int main(){

    int* z;

    z=p(110);

    printf("Value is %d\n",*z);


return 0;
}

int* p(int x){

     count=x;

return &count;
}
