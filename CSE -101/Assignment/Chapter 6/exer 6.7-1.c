#include<stdio.h>

void mystrcat(char* p1,char* p2);


int main(){
   char str1[80],
        str2[80];

   gets(str1);
   gets(str2);

   mystrcat(str1,str2);


   puts(str1);




return 0;
}

void mystrcat(char* p1,char* p2){



  while(*p1) p1++;

  for(;*p2;)
      *p1++ = *p2++;

   *p2='\0';


}
