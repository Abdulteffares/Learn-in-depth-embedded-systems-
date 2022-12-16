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
#include <string.h>

int main(void) {
	char string[100],reversed_string[100];
	int i,k,m ;
	printf("enter your string ");
	fflush(stdout); fflush(stdin);
	gets(string);
	i=strlen(string);
	m=i-1;
	for (k=0;k<=(i-1);k++)
	{
		reversed_string[k]=string[m];
		--m;
	}
	reversed_string[i]=0;
	printf("reversed string is %s",reversed_string);

}
