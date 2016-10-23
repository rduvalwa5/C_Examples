/*
 * array_example.c
 *
 *  Created on: Apr 13, 2015
 *      Author: http://www.tutorialspoint.com/cprogramming/c_arrays.htm
 */

#include <stdio.h>

int main ()
{
   int size = 10;
   int n[ 10 ]; /* n is an array of 10 integers */
   int rvs[10];
   int i,j,r,k,index;

   /* initialize elements of array n to 0 */
   for ( i = 0; i < 10; i++ )
   {
      n[ i ] = i + 100; /* set element at location i to i + 100 */
   }

   /* output each array element's value */
   for (j = 0; j < 10; j++ )
   {
      printf("Element[%d] = %d\n", j, n[j] );
   }

   printf("array n is %d  %d %d\n",n,&n, *n);
   printf("Size of array is %d\n", sizeof(n));
   rvs[9]='\0';
   for(r = 10; r > 0; r-- ){
	   index = r-1;
	   printf("inserting %d\n", n[10-r]);
//	   rvs[r-1] =n[10 - r];
	   rvs[index] = n[10-r];
   }

   for(k = 0; k < 10; k++){
	   printf("Element[%d] = %d\n", k, rvs[k] );
   }

   return 0;
}
