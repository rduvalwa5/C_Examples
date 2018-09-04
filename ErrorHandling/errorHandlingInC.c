/*
 * errorHandlingInC.c
 * https://www.tutorialspoint.com/cprogramming/c_error_handling.htm
 * https://unix.superglobalmegacorp.com/Net2/newsrc/sys/errno.h.html
 */

#include <stdio.h>
// #include <errno.h>
#include <sys/errno.h> // go to outline and click sys/errno.h to read file
#include <string.h>
extern int errno ;

int fileNotFound();  // prototype function
int add (int,int); /* function prototype for add */
int divideByZero(int a);

int fileNotFound(){
	   FILE * pf;
	   int errnum;
	   pf = fopen ("unexist.txt", "rb");

	   if (pf == NULL) {
	      errnum = errno;
	      fprintf(stderr, "Value of errno: %d\n", errno);
	      perror("Error printed by perror");
	      fprintf(stderr, "Error opening file: %s\n", strerror( errnum ));
	   } else {

	      fclose (pf);
	   }
	   return 0;
}

int add(int i,int j)
{
    return i+j;
}

int divideByZero(int a){
	int b = a/0;
	return b;
}

int main () {
	printf("File Not Found %s\n", fileNotFound());
//	printf("add error %d\n",add(3));
//	printf("devideByZero %d\n", divideByZero(3));
}
/*
Value of errno: 2
Error printed by perror: No such file or directory
Error opening file: No such file or directory
File Not Found (null)
 */
