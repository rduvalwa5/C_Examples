/*
 * RecursiveDirectoryExample.c
 *
 *  Created on: Jun 22, 2021
 *      Author: rduvalwa2
 *      https://www.tutorialspoint.com/c-program-to-list-all-files-and-sub-directories-in-a-directory
 *
 */


// input /Users/rduvalwa2/Music/testMusic

#include <stdio.h>
#include <dirent.h>
#include <string.h>

/* function declaration */
int my_strlen(char *string);
void add_to_path(char * fileName, char * myPath, int pathSize);

int main( int argc, char *argv[] )  {
//int main(void){
	int i;
	int size = 101;
	int lengthInput;
	lengthInput = my_strlen(argv[1]); //Your function to calculate length of string

	char myPath[ size ]; /* n is an array of 10 integers */

	char * nextDir;
	char * base = argv[1];
	printf("base is %s\n",base);
   struct dirent *files;
   DIR *dir = opendir(base);
   if (dir == NULL){
      printf("Directory cannot be opened!" );
      return 0;
   }

   /* initialize elements of array n to 0 */

   for ( i = 0; i < size; i++ ){
      myPath[ i ] = '\0'; /* set element at location i to i + 100 */
   }

   for ( i = 0; i < lengthInput; i++ ){
      myPath[ i ] = argv[1][i]; /* set element at location i to i + 100 */
   }


   nextDir = base;
   printf("base %s \n", base);
   printf("next %s \n", nextDir);
   while ((files = readdir(dir)) != NULL){
	   nextDir = base;
	   if(files->d_type == 4){
		   printf("%s  %d \n", files->d_name, files->d_type);
		   printf("second next %s \n", nextDir);
		   char * fil = files->d_name;
		   printf("fil %s \n", fil);
		//   strcat(nextDir,fil);
		   printf("third next %s \n", nextDir);
		   add_to_path(files->d_name, myPath, lengthInput);

	   }
   }

   printf("Last mypath is %s\n",myPath);

   closedir(dir);
   return 0;
}

int my_strlen(char *string) //Function to calculate length of given string
{
    int i;
    for(i=0;string[i]!='\0';i++);
    return i;
}


void add_to_path(char * fileName,char * myPath, int lengthInput){
	int i;
	int newSize;
	int pathSize;
	newSize = 101;
	pathSize = lengthInput;
	printf("myPath size %d\n", pathSize);
	printf("Add string %s\n", fileName);
	printf("MyPath %s \n", myPath);
	for ( i = 0; i < newSize; i++ )
	   {
	      myPath[ lengthInput + i ] = fileName[i ]; /* set element at location i to i + 100 */
	   }

	printf("myPath is now %s\n", myPath);


}





