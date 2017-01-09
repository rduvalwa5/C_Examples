#include<stdlib.h>
#include <stdio.h>
#include <string.h>

 
//void init_array();


struct FILE_CHAR
 {
	char CH;
	struct FILE_CHAR * next; //pointer to own structure type
 };


int main (int argc,char * argv [])
{

FILE * fp;
 
struct FILE_CHAR * head = NULL;
struct FILE_CHAR * prev, * current;
char c;
int characters = 0;
// int i = 0;
// int records = 0;
int bits_inchar = 8;
int bytes_inchar = sizeof(char);
printf("bits_inchar %d bytes_inchar %d total is %d \n ", bits_inchar, bytes_inchar, (bits_inchar * bytes_inchar));

// init_array();


printf("%d\n",argc);
  if (argc < 2)
    { puts("Syntax C:\\> command <Data_filename>");
      exit (1);
     }
printf("argv0 is %s argv1 is %s\n",argv[0],argv[1]);
  if ((fp = fopen( argv[1], "r")) == NULL)
   { printf("File %s failed to open\n", argv[1]);
     exit(1);
    }

/* Read file character into dynamic memory array of field */
printf("size of char is %d\n", (bytes_inchar * bits_inchar));
while ( (c = fgetc(fp)) != EOF)
 {
// printf("char : %d\n", num_bits<char>());
   printf("%c and count is %d \n",c,characters);
   current = (struct FILE_CHAR *) malloc(sizeof(struct FILE_CHAR));
   if (head == NULL)
      head = current;
   else
      prev->next = current;
      current->next = NULL;

   current->CH = c; 
   characters++;
   printf("current is %ld\n", current);
   prev = current;
	}


while (current != NULL)
	{
	printf(" %c",current->CH);
	current = current->next;
	}

printf("Total characters = %d\n",characters);

free(current); 
fclose(fp);

return (0);
}
/*
void init_array()
{  
  int i;	
  for (i = 0; i < SIZE; i++)
  { field[i] = '\0';}
}
*/
