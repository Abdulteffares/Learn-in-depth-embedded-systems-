/*
 ============================================================================
 Name        : Hw.c
 Author      : A.fares
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numbers[100],i,k,m,n,h;
	printf("enter number of elements");
	fflush(stdin); fflush(stdout);
	scanf("%d",&i);
	printf("numbers are \n");
	for(k=1;k<=i;k++)
	{
		printf("%d ",k);
		numbers[k]=k ;
	}
	printf("\n");
	printf("enter your number location\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&m);
	printf("enter your number value\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	numbers[m]=n;
	printf("numbers are \n");
	for(h=1;h<=i;h++)
		{

			printf("%d",numbers[h]);

		}
}
