 /*
 * String_Reverse.c
 * http://www.tutorialspoint.com/c_standard_library/string_h.htm
 *  Created on: Apr 11, 2015
 *      Author: rduvalwa2
 *
 *  Note
 *  	sizeof is calculated at compile time where as strlen is run time
 *  	an empty array must be terminated in null '\0' otherwise you cannot move content to it
 *  In c a string is an array of chars
 */

#include<stdio.h>
#include <string.h>


int main()
{

	char * myString = "My string is this and that!";
    int len = strlen(myString);
	printf("myString is \"%s\" \n",myString);
	printf("%c\n",myString[0]);
	printf("reference address %d\n",&myString);

	printf("sizeof %d\n", sizeof(&myString));
	printf("strlen %d\n",strlen(myString));

	printf("Pointer points to the a memory location of the 1st character in the string %c \n ascii value is %d \n", *myString,  *myString );
	printf("Pointer points to the a memory location of the last character in the string %c \n ascii value is %d \n", myString[26],  myString[26] );
	char myArray[len];

	for(int i = 0; i < len; i++)
	{
		myArray[i] = myString[i];
	}
	printf("myArray:  %s \n",myArray);
	char reversed[len];
	for( int i = len ; i > -1; i--)
	{
		int index = len - i;
		reversed[index] = myArray[i];
	}
	printf("reversed: %s \n",reversed);

/*
	for(int i = len; i > -1; i--)
	{
		int index = len - i;
//		printf("%c  ", myArray[i]);
		reversed[index] = myArray[i];
//		printf("- %c %d \n", reversed[index],index);
	}
	printf("reversed:   %s \n",reversed);

	printf("\n\n***** Next *******\n");
	char *aString = "My dog has fleas.";
	printf("the string %s\n",aString);
	printf("Address of string %d\n",&aString);
	printf("first character of string  %c \n",*aString);

	for(int i = 0; i < strlen(aString);i++){
		printf("%c",aString[i]);
	}
	printf("\n");

	for(int i = 0; i < strlen(aString);i++){
		printf("%d\n",&aString[i]);
	}

	for(int i = 0; i < strlen(aString);i++){
		int address = &aString[i];
		printf("%d  %s\n",address,&aString[i]);
	}
	*/
    return 0;
}
