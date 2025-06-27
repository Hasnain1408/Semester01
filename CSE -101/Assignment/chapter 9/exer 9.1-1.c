#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    int count[26],i;
    for(i=0;i<26;i++) count[i]=0;
    char ch;
    for(i=0;i<26;i++)
    {
    	fp=fopen("myfile","r");
    	while((ch=fgetc(fp))!=EOF)
    	{
    		if(ch==(i+65)||ch==(i+97)) count[i]++;
		}
		printf("%c comes %d times\n",i+65,count[i]);
	}
}
