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
	int matrix1[2][2],matrix2[2][2],result_matrix[2][2] ;
	int i,j,k,m,n,o,h,l ;

	printf("enter elements of  first matrix\n");
	fflush(stdin); fflush(stdout);
	for (i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter element(%d,%d)\n",i,j);
			fflush(stdin); fflush(stdout);
			scanf("%d",&matrix1[i][j]);
		}

	}
	printf("enter elements of  seconed matrix \n");
	fflush(stdin); fflush(stdout);
	for (k=0;k<2;k++)
	{
		for(m=0;m<2;m++)
		{
			printf("enter element(%d,%d)\n",k,m);
			fflush(stdin); fflush(stdout);
			scanf("%d",&matrix2[k][m]);
		}

	}
	fflush(stdin); fflush(stdout);
	for (n=0;n<2;n++)
	{
		for(o=0;o<2;o++)
		{
			result_matrix[n][o]=matrix2[n][o]+matrix1[n][o];
		}

	}
	printf("result is\n");
	for(h=0;h<2;h++)
	{
		printf("\n");
		for(l=0;l<2;l++)
		{
			printf(" %d",result_matrix[h][l]);

		}
	}



}
