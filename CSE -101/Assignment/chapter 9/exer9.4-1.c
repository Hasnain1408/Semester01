#include<stdio.h>
#include<string.h>
int enter()
{
    char str1[100],str2[100];
    printf("Enter first name and number\n");
    scanf("%s %s",str1,str2);
    FILE *fp;
    fp=fopen("number","a");
    fprintf(fp,"%s %s\n",str1,str2);
    return main();
}
int find()
{
    char str[100],temp[100];
    printf("Enter your number: ");
    scanf("%s",str);
    FILE *fp;
    fp=fopen("number","r");
    while(!feof(fp))
    {
        fscanf(fp,"%s",temp);
        if(!strcmp(temp,str))
        {
            printf("Number matched\n\n");
            break;
        }
    }
    if(feof(fp)) printf("Number not found.\n\n");
    return main();
}
int save()
{
    printf("Numbers saved succesfully\n\n");
    return main();
}
int load()
{
    FILE *fp;
    fp=fopen("number","r");
    char ch;
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    return main();
}
int quit()
{
    printf("Exiting software.\nPlease wait.\n");
    return 0;
}
int main()
{
    printf("1. Enter the names and numbers\n2. Find numbers\n3. Save directory to disk\n4. Load directory from disk\n5. Quit\n");
    int choice;
    scanf("%d",&choice);
    if(choice==1) enter();
    if(choice==2) find();
    if(choice==3) save();
    if(choice==4) load();
    if(choice==5) quit();
}
