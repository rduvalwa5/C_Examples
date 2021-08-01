/*
 * c_pointers.c
 *
 *  Created on: Jul 29, 2021
 *      Author: rduvalwa2
 *
 *  https://www.tutorialspoint.com/cprogramming/c_pointers.htm
 *
 *  every memory location has its address defined which can be accessed using ampersand (&) operator
 *  , which denotes an address in memory
 *
 */


#include <stdio.h>

int main () {

	int i = 0;
	int h = 0;
   int  var1;
   char var2[6] = {'a','b','c','d','e','\0'};
   char var3 [7];

   printf("Address of var1 variable: %d  %x\n", var1,  &var1  );
   printf("Address of var2 variable: %s  %x\n", var2,  &var2  );

   for(i = 5; i > -1 ; i-- , h++){
	   var3[h]= var2[i];
	   printf("%c ", var3[h]);
   }
   var3[6] = '\0';

   char str[10];

//   strcpy(str, var2);

   printf("%s \n", var3);

   for(i = 0; i < 7 ; i++){
	   printf("%c",var3[i]);
   }


   int  var = 20;   /* actual variable declaration */
   int  *ip;        /* pointer variable declaration */

     ip = &var;  /* store address of var in pointer variable*/

     printf("Address of var variable: %x\n", &var  );

     /* address stored in pointer variable */
     printf("Address stored in ip variable: %x\n", ip );

     /* access the value using the pointer */
     printf("Value of *ip variable: %d\n", *ip );

   char *el;

   char arrx[] = {'a','b','c','d','e','\0'};

   for (i = 0; i < 6; i++){
	   el = &arrx[i];
	   printf("el %c is %d \n", arrx[i], el);

   }

   int x = 10;
   for(i = 0; i< 10; i++)
   {

//	   printf("xx is %d   ", x);
	   printf("%c  %d \n",(el + x), (el + x));
	   x = x + 20;

   }
   return 0;
}
