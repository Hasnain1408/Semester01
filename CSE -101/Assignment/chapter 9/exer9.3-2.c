#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1,*fp2,*temp;
    char ch;
    fp1=fopen("myfile","r");
    temp=fopen("temp","w");
    while(feof(fp1)==0)
    {
        ch=fgetc(fp1);
        temp=fopen("temp","a");
        fprintf(temp,"%c",ch);
    }
    fp2=fopen("myfile2","r");
    fp1=fopen("myfile","w");
    while(feof(fp2)==0)
    {
        ch=fgetc(fp2);
        fp1=fopen("myfile","a");
        fprintf(fp1,"%c",ch);
    }
    temp=fopen("temp","r");
    fp2=fopen("myfile2","w");
    while(feof(temp)==0)
    {
        ch=fgetc(temp);
        fp2=fopen("myfile2","a");
        fprintf(fp2,"%c",ch);
    }
    fclose(fp1);
    fclose(fp2);
    fclose(temp);
    return 0;
}


