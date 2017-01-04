/*
 * c_clcok_example.c
 *
 *  Created on: Jan 2, 2017
 *  https://www.tutorialspoint.com/c_standard_library/c_function_clock.htm
 *
 *  The C library function clock_t clock(void) returns the number of clock ticks elapsed
 *  since the program was launched. To get the number of seconds used by the CPU,
 *  you will need to divide by CLOCKS_PER_SEC.
 *
 */

#include <stdio.h>
#include <time.h>
#include <unistd.h>  // CLOCKS_PER_SEC



int main()
{
   clock_t start_t = 0, end_t = 0, total_t = 0;
   int i;

   printf("CLOCKS_PER_SEC is %d\n", CLOCKS_PER_SEC);
   start_t = clock();
   printf("Starting of the program, start_t = %ld\n", start_t);

   printf("Going to scan a big loop, start_t = %ld\n", start_t);
//   int add = 0;
   for(i=0; i< 2000000 ; i++)
   {
//	   for(i=0; i< 10 ; i++)
//	   {  printf("");}
   }
   end_t = clock();
   printf("End of the big loop, end_t = %ld\n", end_t);

   total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
   printf("Total time taken by CPU: %f \n", total_t  );
   printf("Exiting of the program...\n");

   return(0);
}

