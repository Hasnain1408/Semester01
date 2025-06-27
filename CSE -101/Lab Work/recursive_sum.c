#include<stdio.h>

int sum(int n);

int main(){

    int n,p;
    scanf("%d",&n);

    p= sum(n);

    printf("%d",p);



return 0;
}

int sum(int n){
    if(n== 0)
    return 0;

    return n+sum(n-1);
}
