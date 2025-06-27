#include<stdio.h>

int sum(int n);

int main(){

    int i,p;
    scanf("%d",&i);

    p = sum(i);

    printf("%d",p);



return 0;
}

int sum(int n){
    if( n == 0 )
        return 1;
    else{

        n= n*sum(n-1);
        printf("%d\n",n);

    }

}
