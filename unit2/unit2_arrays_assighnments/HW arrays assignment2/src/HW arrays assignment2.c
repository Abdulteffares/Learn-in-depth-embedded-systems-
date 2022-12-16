/*
 ============================================================================
 Name        : HW.c
 Author      : A.fares
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n ;
	float data[100],sum=0,average;
	printf("Enter number of data\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&i);
	for(n=1;n<=i;n++)
	{
		printf("enter your %d number",n);
		fflush(stdin); fflush(stdout);
		scanf("%f",&data[n]);
		sum=sum+data[n];
		average=sum/n;
	}
	printf("average is %f",average);
}
