#include<stdio.h>

void main(){

    int a[10],b[20];

    for(int i=1; i<11; i++) a[i-1]=i;
    for(int i=0; i<10; i++) b[i]=a[i];
    for(int i=0; i<10; i++) printf("%d\n",b[i]);




}
