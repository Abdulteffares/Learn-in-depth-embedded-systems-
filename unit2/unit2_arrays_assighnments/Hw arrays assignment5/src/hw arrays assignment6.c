/*
 ============================================================================
 Name        : hw.c
 Author      : A.fares
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numbers[100],i,k,m,n;
		printf("enter number of elements");
		fflush(stdin); fflush(stdout);
		scanf("%d",&i);
		printf("numbers are \n");
		for(k=1;k<=i;k++)
		{

				numbers[k]=rand() ;
				printf("%d ",numbers[k]);

		}
		printf(" ");
		printf("enter number you need to know its location");
		fflush(stdin); fflush(stdout);
		scanf("%d",&m);
		for(n=1;n<=i;n++)
				{
			        if(numbers[n]==m)
			        {
						printf(" your number location is %d ",n);

			        }
				}
}
