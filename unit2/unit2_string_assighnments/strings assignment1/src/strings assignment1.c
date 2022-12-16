/*
 ============================================================================
 Name        : strings.c
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
	char string[100];
	int i=0, k,h=0;
	char m ;
	printf("enter your string");
	fflush(stdout); fflush(stdin);
    gets(string);
	k=strlen(string);
	printf("char you need to search for its frequancy\n");
	fflush(stdout); fflush(stdin);
	scanf("%c",&m);
    for(i=0;i<k;i++)
	{
		if (string[i]==m)
		{
			h++;
		}

	}


 printf("your char frequancy is %d \n",h );

}
