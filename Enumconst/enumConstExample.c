/*
 * enumConstExample.c
 *
 *  Created on: Jun 17, 2021
 *      Author: rduvalwa2
 *
 *   https://www.tutorialspoint.com/enum-in-c
 *
 *   Enumeration is a user defined datatype in C language. It is used to assign names to the integral constants which makes a program easy to read and maintain.
 *   The keyword “enum” is used to declare an enumeration.
 *
 *The value of enum week: 10	11	12	13	10	16	17
 *
 *The default value of enum day: 0	1	2	3	18	11	12
 *
 */


#include<stdio.h>
enum week{Mon=10, Tue, Wed, Thur, Fri=10, Sat=16, Sun};
enum day{Mond, Tues, Wedn, Thurs, Frid=18, Satu=11, Sund};
int main() {
   printf("The value of enum week: %d\t%d\t%d\t%d\t%d\t%d\t%d\n\n",Mon , Tue, Wed, Thur, Fri, Sat, Sun);
   printf("The default value of enum day: %d\t%d\t%d\t%d\t%d\t%d\t%d",Mond , Tues, Wedn, Thurs, Frid, Satu, Sund);
   return 0;
}

