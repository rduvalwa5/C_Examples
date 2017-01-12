/*
 * passByValueExample.c
 *
 *  Created on: Jan 10, 2017
 *      Author: rduvalwa2
 *      http://stackoverflow.com/questions/797318/how-to-split-a-string-literal-across-multiple-lines-in-c-objective-c
 */
#include <stdio.h>
#include <String.h>

char SIZE = 5;

void swap(char a, char b);
void swapPoint(char *a, char *b);
char * reverseArray(char*);

char*  reverseArray(char *myArray)
{
	char *reversed = malloc(sizeof(char) * SIZE);
//  Initialize array with nulls is not necessary
//	for(i = 0; i < SIZE ; i++){
//		reversed[i] = '\0';
//	}

	int index = 0;
	int z = 0;
	for( z = SIZE ; z > 0; z--)
		{
			index = SIZE - z;
			reversed[index] = myArray[z - 1];
		}
	return reversed;
}


void swapPoint(char *a, char *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}
void swap(char a, char b) {
	char tmp = a;
	a = b;
	b = tmp;
	printf("Pass by value affects variables that are inside the function\n");
	printf("The actual variables do not change\n");
	printf("inside the function a = %c b = %c \n\n", a,b);
	}



int main()
{
	printf("Demonstrates passing by value\n");
    char a = 'A';
    char b = 'b';
    char arr[] = {'s','t','u','v','w'};
    printf("before swap a = %c \n", a);
    printf("before swap b = %c \n\n", b);
    swap(a, b);
    printf("after swap a = %c \n", a);
    printf("after swap b = %c \n\n", b);

    printf("before swapPoint a = %c \n", a);
    printf("before swapPoint b = %c \n\n", b);
    swapPoint(&a, &b);
    printf("after swapPoint a = %c \n", a);
    printf("after swapPoint b = %c \n", b);
  	printf("\n");
  	printf("Demonstrate passing an array to a function using a pointer.\n");
  	printf("creating an array on the stack and once you leave the function scope,\n\
the array will be deallocated. Instead, create a dynamically allocated array \n\
and return a pointer to it.\n\n");
    int i;
 	printf("Print array \n");
    for(i = 0; i < SIZE; i++) {
    	printf("%c",arr[i]);
    }

    char * r;
    r = reverseArray(arr);
    printf("\nPrint array reversed\n");
    for(i = 0; i < SIZE; i++) {
    	printf("%c",r[i]);
    }

//    free(r);
}
