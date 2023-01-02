/*
 ============================================================================
 Name        : Functions.c
 Author      : A.fares
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
   int power_calculation(int base ,int power)
   {
	   if (power!=0)
		  return base*power_calculation(base,--power);
    return printf(" ") ;
   }
int main(void) {
	int i,m ;
	printf("enter your base number");
	fflush(stdin); fflush(stdout);
	scanf("%d",&i);
	printf("enter your power number");
	fflush(stdin); fflush(stdout);
	scanf("%d",&m);
	printf("%d",power_calculation(i,m));
}
