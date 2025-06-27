#include<stdio.h>

int main(void){

    float f,*fp,**mfp;

    fp=&f;
    mfp=&fp;

    **mfp=123.99;

    printf("%f\n",f);/output error



return 0;
}
