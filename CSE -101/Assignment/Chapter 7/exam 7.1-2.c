#include<stdio.h>

float getnum(void){
      float x;

      printf("Enter a number: ");
      scanf("%f",&x);

return x;
}


int main(){
    float i;

    i=getnum();

    printf("%f\n",i);


return 0;
}
