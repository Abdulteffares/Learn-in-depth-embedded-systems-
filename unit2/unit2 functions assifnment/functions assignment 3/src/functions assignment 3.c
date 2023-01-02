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
#include <string.h>
char reverse(char array[],int i,int array_lenght)
{
          if  (i<(array_lenght))
        {
        	reverse(array,++i , array_lenght);
        	return printf("%C",array[i-1]);
        }


return printf(" ");
}




int main(void) {
	int i;
	char array[20];
	printf("enter a sentence");
	fflush(stdin);fflush(stdout);
    gets(array);
    i=strlen(array);
	reverse(array,0,i);
}
