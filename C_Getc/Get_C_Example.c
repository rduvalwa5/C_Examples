/*
 * Get_C_Example.c
 *
 *  Created on: Jun 13, 2021
 *      Author: rduvalwa2
 */
#include <stdio.h>
int main( ) {

   int c;

   printf( "Enter a value :");
   while(c != "\n"){
	   c = getchar( );
   	   printf( "\nYou entered: ");
   	   printf("c is  %d\n",c);
   	   putchar(c);
   }

   return 0;
}
