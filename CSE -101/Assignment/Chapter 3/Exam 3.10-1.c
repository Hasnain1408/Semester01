#include<stdio.h>

void main(){

    int i;

    i=1;
    again:
          printf("%d\n",i);
          i++;

          if(i<10) goto again;

}
