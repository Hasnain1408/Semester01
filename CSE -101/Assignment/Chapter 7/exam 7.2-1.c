#include<stdio.h>

void recurse(int i){
    if(i<10){
        printf("%d\n",i);
        recurse(i+1);
    }
}


int main(){

    recurse(0);


return 0;
}
