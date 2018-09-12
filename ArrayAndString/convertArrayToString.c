/*
 * convertArrayToString.c
 *
 *  Created on: Sep 10, 2018
 *      Author: rduvalwa2
 */
#include <stdio.h>
#include <string.h>
#include <strings.h>

int main( int argc, char *argv[] )  {
   if( argc == 2 ) {
	   printf("One expected Argument is: %s \n", argv[1]);
   }
   else if( argc != 2 ) {
      printf("Expect command and one argument, the directory path.\n");
   }

  char * st = "This is a string";
  char * string = argv[1];
  char * forStrCpy [100];
  int i = 0;
  for(i = 0; i < sizeof(argv[1]); i++){
		 printf("%c\n",argv[1][i]);
  }

  printf("string is %s\n",string);
  printf("st is %s\n",st);

  // copy a string to anaother destination https://www.tutorialspoint.com/c_standard_library/c_function_strcpy.htm
  strcpy(forStrCpy,string);
  printf("string is %s\n", argv[1]);
  printf("forStrCpy is %s \n",forStrCpy);

  // add to string https://www.tutorialspoint.com/c_standard_library/c_function_strcat.htm
  strcat(forStrCpy, st);
  printf("forStrCpy is %s \n",forStrCpy);

  return(0);
}
