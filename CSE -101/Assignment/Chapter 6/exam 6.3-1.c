#include<stdio.h>
#include<ctype.h>

int main(void){

    char str[80];
    int i;

    printf("Enter a string: \n");
    gets(str);

    for(i=0; str[i]; i++) str[i]=toupper(str[i]);
    puts(str);

    for(i=0; str[i]; i++) str[i]=tolower(str[i]);
    printf(str);


return 0;
}
