#include<stdio.h>

int area(int len,int width);

int main(void){

	printf("area is %d",area(10,13));
	return 0;
}
int area(int len,int width){

	return len*width;
}
