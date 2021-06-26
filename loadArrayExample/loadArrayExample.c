/*
 * loadArrayExample.c
 *
 *  Created on: Jun 25, 2021
 *      Author: rduvalwa2
 */


#include <stdio.h>
#include <string.h>

/* function declaration */
int my_strlen(char *string);




int main( int argc, char *argv[] )  {
	int size = 101;

	int lengthInput;
	lengthInput = my_strlen(argv[1]); //Your function to calculate length of string

	printf("argv length is %d\n", lengthInput);
	printf("argv[1] is %s\n", argv[1]);

	char myPath[ size ]; /* n is an array of 10 integers */
	int i,appendLen;
	int baseLen;


   /* initialize elements of array n to 0 */
   for ( i = 0; i < size; i++ )
   {
      myPath[ i ] = '\0'; /* set element at location i to i + 100 */
   }

   for ( i = 0; i < lengthInput; i++ )
   {
      myPath[ i ] = argv[1][i]; /* set element at location i to i + 100 */
   }



   printf("mypath is %s\n",myPath);

   return 0;
}

int my_strlen(char *string) //Function to calculate length of given string
{
    int i;
    for(i=0;string[i]!='\0';i++);
    return i;
}
