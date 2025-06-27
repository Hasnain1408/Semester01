#include<stdio.h>

int main(void){

    int arr[10];
    int i,sum;

    for(i=0; i<10; i++){
        printf("Number%d:",i+1);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }

    for(i=0; i<10; i++){
       for(int j=i+1; j<10; j++)
           if(arr[i] == arr[j] && arr[j]!=sum){
              printf("%d Matched!\n",arr[i]);
              arr[j]=sum;
           }


    }




return 0;
}
