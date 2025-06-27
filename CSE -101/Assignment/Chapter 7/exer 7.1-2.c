#include<stdio.h>

float avg(float arr[10]);

void main(){

	int i;
	float arr[10];
	for(i=0;i<10;i++) scanf("%f",&arr[i]);
	printf("avarage is %f",avg(arr));
}

float avg(float arr[10]){

	int i;
	float avg=0;
	for(i=0;i<10;i++)
	{
		avg+=arr[i]/10;
	}
	return avg;
}
