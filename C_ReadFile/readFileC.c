/*
 * readFileC.c
 *
 *  Created on: Sep 5, 2018
 *      Author: rduvalwa2
 */

#include <stdio.h>

int main( int argc, char *argv[] )  {
	printf("Arguments are: %s %s\n", argv[0] , argv[1]);

   if( argc != 2 ) {
      printf("Syntax is readFile.exe argument\n");
      printf("Argument is path to file and the file to open.\n");
      exit(0);
   }

   FILE *fp;
   int c;
   printf("Start program!\n");
   printf("fileIn %s\n",argv[1]);

   fp = fopen(argv[1],"r");
	while(1) {
	      c = fgetc(fp);
	      if( feof(fp) ) {
	         break ;
	      }
	      printf("%c", c);
	   }

   fclose(fp);

   return(0);
}

