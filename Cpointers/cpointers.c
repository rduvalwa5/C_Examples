/*
 * c_pointers.c
 *
 *  Created on: Jan 8, 2017
 *      Author: rduvalwa2
 */

#include <stdio.h>

int main(){


	char *c = "A"; // create and assign a pointer

	int referC = &c;

	printf("Reference c %d \n", referC);
	printf("pointer c %s as reference %d \n", c, &c);

	char * str = "My string!"; //create a string and assign a pointer
	printf("the String %s\n", str);
	for(int i = 0; i < strlen(str); i++){
		printf("%c  %d\n",str[i],&str[i]);
	}

	int *ptr1, *ptr2;
	ptr1 = str[1];
	ptr2 = str[4];

	printf("ptr1 %s value is %d at %d ptr2 value %d at %d \n", &ptr1, ptr1, &ptr1, ptr2,&ptr2);

}

