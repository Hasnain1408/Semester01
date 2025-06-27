#include<stdio.h>

void  f1(int num[5]), f2(int num[],int n), f3(int* num);


int main(){

    int count[5]={1,2,3,4,5};

    f1(count);
    f2(count,sizeof(count)/4);
    f3(count);


return 0;
}

void f1(int num[5]){
    for(int i=0; i<5; i++)
        printf("%d ",num[i]);
    printf("\n");
}

void f2(int num[],int n){
    for(int i=0; i<n; i++)
        printf("%d ",num[i]);
    printf("\n");
}

void f3(int* num){
    for(int i=0; i<5; i++)
        printf("%d ",num[i]);
    printf("\n");
}

