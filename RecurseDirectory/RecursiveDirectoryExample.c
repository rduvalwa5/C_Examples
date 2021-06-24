/*
 * RecursiveDirectoryExample.c
 *
 *  Created on: Jun 22, 2021
 *      Author: rduvalwa2
 *      https://www.tutorialspoint.com/c-program-to-list-all-files-and-sub-directories-in-a-directory
 *
 */

#include <stdio.h>
#include <dirent.h>
int main(void){
   struct dirent *files;
   DIR *dir = opendir("/Users/rduvalwa2/Music/Music/Media.localized");
   if (dir == NULL){
      printf("Directory cannot be opened!" );
      return 0;
   }
   while ((files = readdir(dir)) != NULL)

   printf("%s\n", files->d_name);
   closedir(dir);
   return 0;
}
