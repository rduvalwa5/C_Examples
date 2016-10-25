/*
 * Exercise find longest string in an array of strings that contains all the
 * characters in a char array
 */

#include <stdio.h>;
#include <string.h>;

// #define MX 5
// #define LN 16

// char strg[MX][LN];

int main(void)
{
/*
Declaring a string.  This example is a char array, size is set in one example and defined by
content it other example.
*/
	char chr[4] = "aces";
	char word[] = "The word is OMmmm!";
	
	printf("chr is %s\n", chr);
	printf("chr length id %d\n", strlen(chr));
	printf("word is %s\n", word);
	printf("word length id %d\n", strlen(word));
	printf("sizeof chr is %d\n",sizeof(chr));
	printf("sizeof first character of chr, \"%c\" is %d\n",chr[0], sizeof(chr[0]));

	int c = 0;
	/*
	use in for loop
	*/
	for( c = 0; c < strlen(chr) ; c++)
		{ printf("%c", chr[c]); 
		}
	printf("\n");
	/*
	Print in reverse using for loop
	*/		
	for( c = strlen(word); c > -1 ; c--)
		{ printf("%c", word[c]); 
		}
	printf("\n");
	
	return(0);
}
