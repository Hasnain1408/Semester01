#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    fp=fopen("myfile","r");
    char ch,str[1000];
    int i;
    for(i=0;((ch=fgetc(fp))!=EOF);i++)
    {
        str[i]=ch;
    }
    fp=fopen("myfile2","w");
    for(i=0;i<strlen(str);i++)
    {
        fprintf(fp,"%c",str[i]);
    }
}
