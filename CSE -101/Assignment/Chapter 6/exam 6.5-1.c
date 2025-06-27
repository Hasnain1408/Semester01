#include<stdio.h>

void error(int i);

int main(void){

    char* p[]= {
        "Input exceeds field width",
        "Output of range",
        "printer not turned on",
        "disk full"
    };

    error(2);



return 0;
}

void error(int i){
    printf(p[i]); /
}

