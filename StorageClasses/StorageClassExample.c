/*
 * StorageClassExample.c
 *
 *  Created on: May 17, 2021
 *      Author: rduvalwa2
 *
 *  https://www.tutorialspoint.com/cprogramming/c_storage_classes.htm
 *
 *  A storage class defines the scope (visibility) and life-time of variables and/or functions within a C Program. They precede the type that they modify. We have four different storage classes in a C program −
 *
 *   auto
 *   register
 *   static
 *   extern
 *
 */

#include <stdio.h>

/* function declaration */
void func(void);

void funcRegister(void);

static int count = 5; /* global variable */

main() {
   funcRegister();
   while(count--) {
      func();
   }

   return 0;
}

/* function definition */
void func( void ) {

   static int i = 5; /* local static variable */
   i++;
   printf("i is %d and count is %d\n", i, count);
  /*
   *
   * The static storage class instructs the compiler to keep a local variable in existence
   * during the life-time of the program instead of creating and destroying it each time it
   * comes into and goes out of scope. Therefore, making local variables static allows them
   * to maintain their values between function calls.
   *
   * The static modifier may also be applied to global variables. When this is done, it
   * causes that variable's scope to be restricted to the file in which it is declared.
   *
   */
}

void funcRegister(void){
	register int  miles = 100000001;
	register char alpha = "a";
//	register char str[] = "ab";
//	printf("Registers are %s , %d , %s\n ",alpha, miles, str);
	printf("Registers are %d  %d \n ", miles, alpha);

 /*
  * The register storage class is used to define local variables that should be stored in a
  *  register instead of RAM. This means that the variable has a maximum size equal to the
  *  register size (usually one word) and can't have the unary '&' operator applied to it
  *  (as it does not have a memory location).
 */
}
