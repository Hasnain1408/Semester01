#include<stdio.h>
#include<string.h>

void withdraw(char* name,int* account);
void deposite(char* name,int* account);


int main(){
    FILE *fp;
    int i,account[4];
    char name[4][50],
         choice[20];

    fp=fopen("myfile.txt","r");

    if(fp == NULL)
         printf("No file.\n");

    i=0;
    while(feof(fp) == 0){
        fscanf(fp,"%s %d\n",name[i],&account[i]);
    i++;
    }
     for(int j=0; j<4; j++){

             printf("%s %d\n",name[j],account[j]);

    }

    printf("withdraw deposite\n");
    gets(choice);

    if(!strcmp("withdraw",choice))
        withdraw(name,account);
    else  if(!strcmp(choice,"deposite"))
        deposite(name,account);

   fclose(fp);

return 0;
}

void withdraw(char* name,int* account){
    int j,a;
    char str[20];

    printf("Name: \n");
    gets(str);
    printf("Amount: \n");
    scanf("%d",&a);

    for(j=0; j<4; j++){
         if(!strcmp(str,name[j]))
             printf("Present Amount: %d\n",account[j]-a);

    }
}

void deposite(char* name,int* account){
    int j,a;
    char str[20];

    printf("Name: \n");
    gets(str);
    printf("Amount: \n");
    scanf("%d",&a);

    for(j=0; j<4; j++){
         if(!strcmp(str,name[j]))
             printf("Present Amount: %d\n",account[j]+a);

    }
}
