#include<stdio.h>

int main(void){

    int x,y;

    printf("Entter first number:");
    scanf("%d",&x);

    printf("Entter second number:");
    scanf("%d",&y);

    /* relational operator */
    printf("x<y %d\n",x<y);
    printf("x<=y %d\n",x<=y);
    printf("x==y %d\n",x==y);
    printf("x>y %d\n",x>y);
    printf("x>=y %d\n",x>=y);

    /* logical operator */
    printf("x || y %d\n",x ||y);
    printf("x && y %d\n",x && y);
    printf("!x !y %d %d\n",!x,!y);





return 0;
}
