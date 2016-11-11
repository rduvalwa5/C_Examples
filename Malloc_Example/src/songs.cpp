/*
 * malloc_examples.cpp
 *
 *  Created on: Nov 10, 2016
 *      Author: rduvalwa2
 * This program demonstrates a linked list and printing a link list for and backwards
 * This program uses linked list to build a binary file containing a list of
 * songs providing the artist, album that the song is on
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE  6 // define number of categories


#include <iostream>
using namespace std;

struct songs {	char song[46];
		char artist[46];
		char album[46];
		char cat[12];
		struct songs * next; // point to next address
		  };

//char *
char * Category[] = {"CLASSIC","COUNTRY","JAZZ","ROCK","BLUES","SOUL"}; // defines categories

int main (int argc, char * argv[])
	{
	  FILE * fp;

	  char sel = 'x';
	  struct songs * head = NULL;
	  struct songs * prev, * current;
	  char input[45];
	  int i = 0;
	  int songCount = 0;
      int found_it = 0;
	  if (argc < 1)
		 {
		cout << "Syntax is songs.exe <output file>\n";
		exit(0);
		 }

	if ((fp = fopen (argv[1],"a+")) == NULL)
		{
		  fprintf(stdin, "Cannot open %s in a+ mode\n",argv[1]);
		  exit(1);
		}



	puts("Enter First Song: ");
	while (gets(input) != NULL && input[0] != '\0')
	{

		current = (struct songs *) malloc(sizeof(struct songs));
		if (head == NULL)
			 head = current;
		else
		 prev->next = current;
		 current->next = NULL;
		 strcpy(current->song, input);	//-> is a pointer to a structure
		 puts("Enter Artist: ");
		 gets(current->artist);
		 puts("Enter Album: ");
		 gets(current->album);
/*
		while ( (strcmp(current->cat,Category[0])!=0)
			&&(strcmp(current->cat,Category[1])!=0)
			&&(strcmp(current->cat,Category[2])!=0)
			&&(strcmp(current->cat,Category[3])!=0)
			&&(strcmp(current->cat,Category[4])!=0)
			&&(strcmp(current->cat,Category[5])!=0)
            )
		  {

		printf("Valid Categories %s   %s   %s   %s   %s   %s\n",Category[0],Category[1],Category[2],Category[3],Category[4],Category[5]);
		  printf("Valid Categories are:\n");
		  for (i = 0; i < SIZE ; i++)
			{
					printf("%d for %s\n",i, Category[i]);
				}

			gets(current->cat);
			printf("%s\n",current->cat);
		  }
*/
		songCount++;
		puts("Enter next song title return no input to end: ");
		prev = current;

		}

	if (head == NULL)
	  {
		puts("No data entered.\n");
		return 0;
	  }
	else
	current = head;
	printf("Total number of songs enter is %d\n",songCount);
	printf("The List: \n");

	printf(" %s  %s  %s %s %s\n", "Song Title", "Artist", "Album","Category","Next Address");
	fprintf(fp,"%s,%s,%s,%s,%s\n", "Song Title", "Artist", "Album","Category","Next Address");

	while ( current != NULL)
	{
	printf(" %s  %s  %s %s %d\n", current->song, current->artist, current->album, current->cat,current ->next);
	fprintf(fp,"%s,%s,%s,%s\n", current->song, current->artist, current->album,current->cat);
	current = current->next;
	}

		  printf("The Reverse List: \n");
	current = head;
	while ( songCount > 0)
	{

	  found_it = 1;
		while (found_it <  songCount)
		{
		  current = current ->  next;
			found_it ++;
		}

	printf(" %s  %s  %s %s  %d\n", current->song, current->artist, current->album, current->cat, current-> next);
	songCount--;
	current = head;
	}


	fclose (fp);
	printf("End of program %s\n", argv[0]);
	return 0;
    }


