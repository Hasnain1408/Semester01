#include<stdio.h>
#include<string.h>

void withdraw(char* name,int* account);
void deposite(char* name,int* account);


int main(){
    FILE *fp,*fp1;
    int i;
    char bd[80];


    fp=fopen("bd.txt","r");

    if(fp == NULL){
         printf("No file.\n");
         return 0;
    }

    for(i=0; feof(fp)== 0; i++){
        bd[i]=fgetc(fp);
    }

    printf(bd);



   fp1=fopen("out.txt","w");

   fprintf(fp1,"%s",bd);












   fclose(fp);

return 0;
}


