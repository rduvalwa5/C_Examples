/*
 * memsetExample.c
 *
 *  Created on: Oct 8, 2018
 *      Author: RDuval
 */

#include <stdio.h>
#include <string.h>

int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   memset(str,'$',7);
   puts(str);

   return(0);
}
