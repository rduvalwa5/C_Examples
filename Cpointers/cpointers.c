/*
 * c_pointers.c
 *
 *  Created on: Jan 8, 2017
 *      Author: rduvalwa2
 */

#include <stdio.h>

int main(){

	/*
	 Functions belonging to the printf function family have the type specifiers "%p" and "%x".
	 "x" and "X" serve to output a hexadecimal number. "x" stands for lower case letters (abcdef)
	 while "X" for capital letters (ABCDEF). "p" serves to output a pointer. It may differ depending
	 upon the compiler and platform.
	 %d is a signed integer, while %u is an unsigned integer. Pointers (when treated as numbers) are
	 usually non-negative. If you actually want to display a pointer, use the %p format specifier.
	 */

	char *c = "A"; // create and assign a pointer

	int referC = &c;

	printf("Reference c %d \n", referC);
	printf("pointer c %s as reference %d \n", c, &c);

	char * str = "My string!"; //create a string and assign a pointer
	printf("the String %s\n", str);
	for(int i = 0; i < strlen(str); i++){
		printf("c is %c | d is %d | p is %p | x is  %x  | u is %u\n",str[i],&str[i],&str[i],&str[i],&str[i]);
	}

	int *ptr1, *ptr2;
	ptr1 = str[1];
	ptr2 = str[4];

	printf("ptr1 %s value is %d at %d ptr2 value %d at %d or %p\n", &ptr1, ptr1, &ptr1, ptr2,&ptr2,&ptr2);

}

