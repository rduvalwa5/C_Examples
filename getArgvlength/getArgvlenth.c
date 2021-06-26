/*
 * getArgvlenth.c
 *
 *  Created on: Jun 25, 2021
 *      Author: rduvalwa2
 */


#include <stdio.h>
#include <string.h>
int my_strlen(char *string) //Function to calculate length of given string
{
    int i;
    for(i=0;string[i]!='\0';i++);
    return i;
}
int main(int argc, char *argv[])
{
  int length;
  if(argc != 2) //Check the number of command line arguments
  {
    printf("You must run this program with an argument\n");
    return 2;
  }
  else
  {
    length = my_strlen(argv[1]); //Your function to calculate length of string
    printf("Length of command line argument is: %d\n", length);
  }
  return 0;
}
