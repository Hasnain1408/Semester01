#include<stdio.h>

int x=10;

int func(int i);

void main(){

    int y=x;

    int z=func(y);

    printf("%d\t%d\t%d\n",x,y,z);





}

int func(int i){

return i/2;
}
