/*
 * string_arrayx.c
 *
 *  Created on: Oct 24, 2016
 *      Author: rduvalwa2
 */

#include <stdio.h>
#include <String.h>

/*
 * The quick brown coyote.
 * The coyote jumped over the lazy dog.
 * The coyote got Mary's little lamb had been.
 * Eat lamb coyotes can't be wrong.
 *
 */

int MAX_NUMBER_STRINGS = 4;
int MAX_STRING_SIZE = 45;


int main(){
	/*
	 * Example of how to instanciate an array of string:
	 * 1) declare a char array of pointers
	 * 2) initiate with strings
	 * 3) in this example do not need to declare size
	 */

	 char *one = "The quick brown coyote.";
	 char *two = "The coyote jumped over the lazy dog.";
	 char *three = "The coyote got Mary's little lamb had been.";
	 char *four = "Eat lamb coyotes can't be wrong.";

	char *stringArray[] = {"This is String one.","String 2","String 3","At last String 4."};

	char* inputArray[MAX_NUMBER_STRINGS];

	int i;
	for (i = 0; i< (int)(sizeof(inputArray)); i++)
	{
		if( i == 0)
			{ inputArray[i] = one;}
		if( i == 1)
			{ inputArray[i] = two;}
		if( i == 2)
			{ inputArray[i] = three;}
		if( i == 3)
			{ inputArray[i] = four;}
	}


	for (i = 0; i < 4; i++)
	{
		printf("stringarray %d  %s",i, stringArray[i]);
		printf("\n");
	}

	for (i = 0; i< MAX_NUMBER_STRINGS ; i++)
	{
		printf("inputarray string %d %s",i + 1, inputArray[i]);
		printf("\n");
	}

	printf("address of inputArray %d\n", &inputArray);

	for (i = 0; i< MAX_NUMBER_STRINGS ; i++)
	{
		printf("%s\n", inputArray[i]);
		printf("memory address of pointer %d\n" , &inputArray[i]);
	}

	int st = 0;
	for (st = 0; st < MAX_NUMBER_STRINGS ; st++){
		printf("%s\n",inputArray[st]);
		for (i = 0; i <  strlen(inputArray[st]) ;i++)
				{
					if(st == 0){ printf("%c  %d\n", one[i],&one[i]);}
					if(st == 1){ printf("%c  %d\n", two[i],&two[i]);}
					if(st == 2){ printf("%c  %d\n", three[i],&three[i]);}
					if(st == 3){ printf("%c  %d\n", four[i],&four[i]);}
				}
		}

}
