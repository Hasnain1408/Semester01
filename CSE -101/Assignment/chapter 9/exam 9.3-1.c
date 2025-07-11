#include<stdio.h>
#include<stdlib.h>
int main(int argc,*argv[]){

    FILE *from,*to;
    char ch;
    if(!(argc==3)){

        printf("Usage : copy <source> <destination>\n");
        exit(1);
    }
    if((from=fopen(argv[1],"rb"))==NULL){

        printf("Cannot open source file\n");
        exit(1);
    }
    if((to=fopen(argv[2],"wb"))==NULL){

        printf("Cannot open destination file.\n");
        exit(1);
    }
    while(!feof(from))
    {
        ch=fgetc(from);
        if(ferror(from)){

            printf("Error reading source file\n");
            exit(1);
        }
        if(!ferror(from)) fputc(ch,to);
        if(ferror(to)){

            printf("Error writing destination file.\n");
            exit(1);
        }
    }
    if(fclose(from)==EOF){

        printf("Error closing source file\n");
        exit(1);
    }
    if(fclose(to)==EOF){

        printf("Error closing destination file.\n");
    }
    return 0;
}
