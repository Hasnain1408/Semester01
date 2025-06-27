#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct user{
    char first_name[160];
    char last_name[80];
    int age;
    int balance;
}array[1000];
int deposit(int l){
    int dep;
    printf("Amount to deposit: ");
    scanf("%d",&dep);
    return l+dep;
}
int withdraw(int k){
    int wit;
    printf("Amount to withdraw: ");
    scanf("%d",&wit);
    if(wit>k){
        printf("You don't have sufficient balance. Please try again\n");
        return withdraw(k);
    }
    else{
        return k-wit;
    }
}
int main(){
    int i,j,k,user_num=0,choice,flag=0;
    char f_name[80],l_name[80],temp1[300],temp2[10];
    FILE *fp_in,*fp_out;
    fp_in=fopen("bank_in.txt","r");
    if(fp_in==NULL){
        printf("Cannot open the file.");
        return 0;
    }
    for(i=0;feof(fp_in)==0;i++){
        k=0;
        fscanf(fp_in,"%s",temp1);
        for(j=0;temp1[k]!=',';j++){
            array[i].first_name[j]=temp1[k];
            k++;
        }
        array[i].first_name[j]='\0';
        k++;
        for(j=0;temp1[k]!=',';j++){
            array[i].last_name[j]=temp1[k];
            k++;
        }
        array[i].last_name[j]='\0';
        k++;
        for(j=0;temp1[k]!=',';j++){
            temp2[j]=temp1[k];
            k++;
        }
        temp2[j]='\0';
        k++;
        array[i].age=atoi(temp2);
        for(j=0;temp1[k]!=',';j++){
            temp2[j]=temp1[k];
            k++;
        }
        temp2[j]='\0';
        array[i].balance=atoi(temp2);
        user_num++;
        printf("%s,%s,%d,%d\n",array[i].first_name,array[i].last_name,array[i].age,array[i].balance);
    }
    fclose(fp_in);
    printf("Enter first name: ");
    gets(f_name);
    printf("Enter last name: ");
    gets(l_name);
    for(i=0;i<user_num;i++){
        if(strcmp(f_name,array[i].first_name)==0&&strcmp(l_name,array[i].last_name)==0){
            flag=1;
            printf("%s %s what do you want to do?\nEnter 1 to deposit. Enter 2 to withdraw.\n",f_name,l_name);
            printf("Enter your choice: ");
            scanf("%d",&choice);
            if(choice==1){
                array[i].balance=deposit(array[i].balance);
                break;
            }
            else if(choice==2){
                array[i].balance=withdraw(array[i].balance);
                break;
            }
        }
    }
    if(!flag){
        printf("No user found.\n");
        printf("Please restart the program.\n");
        return 0;
    }
    fp_out=fopen("bank_out.txt","w");
    for(i=0;i<user_num;i++){
        fprintf(fp_out,"%s,%s,%d,%d\n",array[i].first_name,array[i].last_name,array[i].age,array[i].balance);
    }
    fclose(fp_out);
    return 0;
}