#include<stdio.h>

void rcopy(char* s1,char* s2){
    if(*s2){
        *s1++ =*s2++;
        rcopy(s1,s2);
    }else *s1='\0';
}


int main(){
    char str[80];

    rcopy(str,"Exam is painful.");
    printf(str);



return 0;
}
