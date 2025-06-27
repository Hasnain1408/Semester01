#include<stdio.h>

float avg(float arr[10]){

	int i;
	float avg=0;
	for(i=0; i<10; i++){

		avg+=arr[i];
	}
	avg=avg/10;

	return avg;
}
void main(){

	float arr[10];
	for(int i=0; i<10; i++) scanf("%f",&arr[i]);
	printf("avarage is %f",avg(arr));
}
