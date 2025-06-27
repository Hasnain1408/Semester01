#include<stdio.h>


int main(){

    char text[][80]={
         "when","in",
         "the","human",
         "course",""
         };

    int i,j;

    for(i=0; text[i][0]; i++){
        for(j=0; text[i][j]; j++)
           printf("%c",text[i][j]);
           printf("\t");
        }

    printf(" ");


return 0;
}
