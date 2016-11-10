/*
 * union_example.c
 *
 *  Created on: Nov 8, 2016
 *      Author: rduvalwa2
 *
 *  demonstration of union type for variable storage and array storage
 */


#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#define COM_SIZE 100

/*
 * 1) Union is similar to that of Structure. Syntax of both are same but major difference between structure and
 *    union is ‘memory storage‘.
 * 2) In structures, each member has its own storage location, whereas all the members of union use the same location.
 *    Union contains many members of different types,
 * 3) Union can handle only one member at a time.
 */


struct S {
		  char letter[COM_SIZE];
		  int digit[COM_SIZE];
		  char neither[COM_SIZE];
		};

void printStruct(struct S myStruct);

main()
	{
		int index = 0;
		int alphaIdx = 0;
		int digitIdx = 0;
		int otherIdx = 0;
		struct S myStruct;

		for (index = 0; index < COM_SIZE; index++)
			{
				myStruct.digit[index] = '\0';
			}

		char input[COM_SIZE];
		puts("Type the input \n");
		gets(input);
//		puts(input);
		char message[COM_SIZE] = "The input you typed was ";
		printf("%s\n",strcat(message,input));
		printf("input length is %d\n", strlen(input));
		for(index = 0; index < strlen(input);index ++)
		{
			if (isalpha(input[index]))
			{
				printf("alpha %c\n", input[index]);
				myStruct.letter[alphaIdx] = input[index];
				alphaIdx++;
			}
		else if (isdigit(input[index]))
			{
				printf("digit %c\n", input[index]);
				myStruct.digit[digitIdx] = input[index];
				printf("dig %d char %c\n", myStruct.digit[digitIdx],myStruct.digit[digitIdx]);
				digitIdx++;
			}
		else
			{
			printf("other %c\n", input[index]);
			myStruct.neither[otherIdx] = input[index];
			otherIdx++;
			}
		}

	printStruct(myStruct);

}

void printStruct(struct S myStruct)
	{
		int idx = 0;
        printf("letters %s\n",myStruct.letter);
        printf(" digits \n");
        for( idx = 0; idx < sizeof(myStruct.digit)/sizeof(myStruct.digit[0]); idx++){
        	printf("%c", myStruct.digit[idx]);
        }
        printf("\nother is: %s \n", myStruct.neither);
	}


