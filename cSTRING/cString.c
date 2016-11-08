/*
 * cString.c
 *
 *  Created on: Nov 7, 2016
 *      Author: rduvalwa2
 */

#include <stdio.h>
#include <string.h>



char * null_initialize(char arr[]);
char * compareStrings(char *, char *);
void concatenateStrings(char* s1, char* s2);

char *true = "TRUE";
char *false = "FALSE";

/*
 * C compare strings
 */
char * compareStrings(char* s1,char* s2){
	int result = 0;
	result = strcmp(s1, s2);
	if(result == 0){
		 return true;}
	else
		{ return  false;}
	}

/*
 * string concatenate strcat(s1, s2);
 * Concatenates string s2 onto the end of string s1.
 */
void concatenateStrings(char* s1, char* s2 ){
//		printf("concatenate %s to %s\n", s1, s2);
		strcat(s1, s2);
	}

char *  null_initialize(char arr[]){
	int size = 0;
	for(size = 0; size < strlen(arr); size++){ arr[size] = '\0';}
	return(arr);
	}


int main(void){
	int idx = 0;
	char charArray[300] = {'N','o','t',' ','m','e','!','\0'};
	char charNotMe[300] = {'N','o','t',' ','t','h','i','s',' ','t','i','m','e','?','\0'};
	char* charTrue = "Not me!";
	char* charFalse = "Not me at this time?";
	printf("charArray and charTrue returns: %s\n",compareStrings(charArray,charTrue));
	printf("charArray and charFalse returns: %s\n",compareStrings(charArray,charFalse));


	char  dotdotdot[] = ".....";
	printf("%s\n",dotdotdot);
	printf("1  %s  %d\n",charArray,strlen(charArray));

	concatenateStrings(charArray,dotdotdot);
	printf("%s\n", charArray);

	concatenateStrings(charArray,charFalse);
	printf("%s\n", charArray);

	printf("\nStart for loop\n");
	for(idx = 0; idx < strlen(charArray); idx++){
		printf("%c",charArray[idx]);
	}
	printf("\n");


	char first [50] = "This is the first string.";
	char second [50] = "Now the second string.";

	printf("Before: %s\n", first);
	concatenateStrings(first, second);
	printf("After: %s\n", first);

	printf("second before: %s\n", second);
//	printf("length %d", strlen(charTrue));
//	printf("2  %s\n",charTrue);
//	strcat(charTrue, charFalse);
//	printf("3  %s\n",charTrue);



}
