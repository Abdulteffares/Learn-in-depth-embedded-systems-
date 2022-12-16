/*
 ============================================================================
 Name        : string.c
 Author      : A.fares
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char string[100];
	int i=0;
	printf("enter your string \n");
	fflush(stdout); fflush(stdin);
	gets(string);
	while(string[i]!=0)
	{
		i++;
	}
	printf("your string lenght is %d ",i);
}
