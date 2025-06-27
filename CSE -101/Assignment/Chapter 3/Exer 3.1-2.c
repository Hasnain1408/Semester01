#include<stdio.h>

int main(void){

    char ch;
    for(ch='A'; ch<='z'; ch++){

        if(ch>'Z' && ch<'a') continue;
        printf("%c\n",ch);




    }


return 0;
}
