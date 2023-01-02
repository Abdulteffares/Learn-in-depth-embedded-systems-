/*
 ============================================================================
 Name        : functions.c
 Author      : A.fares
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int factoriall( int n)
 {

	if(n!=1)
	{
       return n*factoriall(n-1);
	}

	return printf(" ");
 }
int main(void) 	{


     int n;
	printf("enter the factorial number");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n);
	factoriall(n);
	printf("the factorial of %d is %d",n,factoriall(n));

}

