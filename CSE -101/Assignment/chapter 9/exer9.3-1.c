#include<stdio.h>
#include<stdlib.h>
int main(){

    FILE *fp;
    fp=fopen("myfile","r");
    char str[100],ch;
    int i=0;
    while(feof(fp)==0)
    {
        str[i]=fgetc(fp);
        i++;
    }
    fclose(fp);
    printf(str);
return 0;
}
