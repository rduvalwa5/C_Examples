 /*
  * Windows version of String_Reverse
 * String_Reverse.c
 * http://www.tutorialspoint.com/c_standard_library/string_h.htm
 *  Created on: Apr 11, 2015
 *      Author: rduvalwa2
 *
 *  Note
 *  	sizeof is calculated at compile time where as strlen is run time
 *  	an empty array must be terminated in null '\0' otherwise you cannot move content to it
 *  In c a string is an array of chars
 *
 *
 */

#include<stdio.h>
#include <string.h>


int main()
{

	char * myString = "My string is this and that!";
    int len = strlen(myString);
    int i = 0;
	char myArray[len + 1];
	myArray[len + 1] = '\0';
	char reversed[len + 1];
	printf("myString is \"%s\" \n",myString);
	printf("%c\n",myString[0]);
	printf("reference address %d\n",&myString);

	printf("sizeof %d\n", sizeof(&myString));
	printf("strlen %d\n",strlen(myString));

	printf("Pointer points to the a memory location of the 1st character in the string %c \n ascii value is %d \n", *myString,  *myString );
	printf("Pointer points to the a memory location of the last character in the string %c \n ascii value is %d \n", myString[26],  myString[26] );


	for(int i = 0; i < len; i++)
	{
		myArray[i] = myString[i];
	}

	int index = 0;
	for( int i = len; i > -1; i--)
	{
		index = (len -1) - i;
		if(myArray[i] != '\0'){reversed[index] = myArray[i];}
//		printf("%c",reversed[index]);
	}
	reversed[len + 1] = '\0';
	printf("\nmyArray lenth %d\n",sizeof(myArray));
	printf("reversed lenth %d\n",sizeof(reversed));
	printf("myArray:  %s \n",myArray);
	printf("reversed: %s \n",reversed);

	printf("Print reversed character at a time\n");

	for(i = 0; i < len + 1; i++){
	printf("%c",reversed[i]);
	}

    return 0;
}
