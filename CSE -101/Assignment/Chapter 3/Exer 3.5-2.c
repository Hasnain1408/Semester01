#include<stdio.h>

int main(void){

    printf("Mailing list menu:\n\n1.Enter Address.\n2.Delete Address.\n3.Search the list.\n4.Print the list.\n5.Quit\n");

    int choice;
    int i=0;
    do{
         //int choice;//
         printf("Enter the number of your choice:");
         scanf("%d",&choice);
    i++;
    }while(choice<1 || choice>5);



return 0;
}
