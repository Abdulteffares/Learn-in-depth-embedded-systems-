/*
 ============================================================================
 Name        : function.c
 Author      : A.fares
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
 int main(void) {
	int find_prime_numbers(int A,int b );
	int a,b ;
	printf("enter your lower interval value ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);
	printf("enter your higher interval value ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&b);
	find_prime_numbers(a,b );

return 0;
}
int find_prime_numbers(int A,int b )
  {
	  for(int i=A;i<=b;i++)
	   {
	 	  int check=0;
	 	 for(int j=2;j<=9;j++)
	 	 {
	 		if(i%j==0)
	 		{
	 		 check=1;
	 		 break;
	 		}
	 	 }
	 	 if(check==0)
	       printf("%d",i);
	    }
	return printf(" ");
  }

