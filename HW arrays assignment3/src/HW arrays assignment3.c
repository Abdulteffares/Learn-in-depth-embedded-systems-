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
 int data[10][10],t_data[10][10],i,k,n,m,a,b,h,l;
 printf("array rows\n");
 fflush(stdout); fflush(stdin);
 scanf("%d",&i);
 printf("array coloumns\n");
 fflush(stdout); fflush(stdin);
 scanf("%d",&k);
 for(n=0;n<i;n++)
 {
	 for(m=0;m<k;m++)
	 {
		 printf("enter element of(%d,%d)\n",n,m);
		 fflush(stdout); fflush(stdin);
		 scanf("%d",&data[n][m]);
	 }

 }
 for(a=0;a<i;a++)
 {
 for(b=0;b<k;b++)
 	 {
 		t_data[a][b]=data[b][a];
 	 }
 }
 printf("result is\n");
 	for(h=0;h<i;h++)
 	{
 		printf("\n");
 		for(l=0;l<k;l++)
 		{
 			printf(" %d",t_data[h][l]);

 		}
 	}


}
