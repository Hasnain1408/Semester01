#include<stdio.h>

void sum(int n);

int main(){

    int i,p;
    scanf("%d",&i);

    sum(i);




return 0;
}

void sum(int n){
    if(n <5 ){
            sum (n+1);
     printf("%d\n",n);

    }



}
