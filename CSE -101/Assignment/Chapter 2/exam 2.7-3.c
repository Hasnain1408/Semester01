#include<stdio.h>

int xor(int x,int y);

int main(void){

    int p,q;

    printf("enter P(0 or 1):");
    scanf("%d",&p);

    printf("enter Q(0 or 1):");
    scanf("%d",&q);

    printf("P AND Q:%d\n",p && q);
    printf("P OR Q:%d\n",p || q);
    printf("P XOR Q:%d\n",xor(p,q));



return 0;
}
int xor(int x,int y){

return (x || y) && !(x && y);

}
