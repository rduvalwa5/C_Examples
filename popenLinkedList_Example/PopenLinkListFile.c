/*
 * FindAndReadFile.c
 *  Created on: Sep 8, 2018
 *      Author: rduvalwa2
 *
 *   find\ \ /etc/\ \ -name\ hosts*   //etc/hosts
 *   find\ \ //Users/rduvalwa2\ \ -name\ hosts.txt    //Users/rduvalwa2/hosts.txt
 */
#include <stdio.h>
#include <string.h>


int main( int argc, char *argv[] )
{
	struct file{
				  char * file[100];
				};

	struct file fileList[100];

	char* fileName[100];
	char * fileNames[1000];

	struct file fileInput;
	int init = 0;
	for(init = 0; init < 1000; init++){
		fileNames[init] = '\0';
	}

	printf("argument %s %s expected file %s\n",argv[0], argv[1], argv[2]);
	FILE *p;

	char  ch;
	int aa = 0;
	int sizeOfArg2 = sizeof(argv[2])/sizeof('a');
	printf("Size of arg2 %d\n",sizeOfArg2);
	for(aa = 0; aa < (sizeof(argv[2])/argv[2][0]); aa++){
		printf("%d %c",aa, argv[2][aa]);
	}

//    p = popen("ver","r");   /* DOS */
	printf("%s\n",argv[1]);
    p = popen(argv[1],"r"); /* Unix */
    if( p == NULL){
        puts("Unable to open process");
        return(1); }
	int yy = 0;
    while( (ch=fgetc(p)) != EOF){
    	fileNames[yy] = ch;
//    	printf("%c",fileNames[yy] );
    	yy++;
         }
    pclose(p);
    int z = 0;
    printf("%d\n",sizeof(fileNames)/sizeof(ch));
	for(init = 0; init < 100; init++){
		fileName[init] = '\0';
	}
	int x = 0;
	int xx = 0;
	printf("Printing fileNames array\n");
    while(fileNames[z] != '\0'){
    	printf("%c",fileNames[z]);
//    	fileInput.name[x] = fileNames[z];
//    	printf("[%c]",fileInput.name[x]);


    	if( fileNames[z] == '\n'){
    		printf("\nFound new line at %d\n", z);
/*    		printf("Printing fileName size %d\n", sizeof(fileName)/sizeof(ch));
    		for(xx = 0; xx < sizeof(fileName)/sizeof(ch);x++){
    			printf("%c", fileName[xx]);  }
    		printf("Initializing fileName\n");
    		for(init = 0; init < 100; init++){
    				fileName[init] = '\0'; }
    */			}
   		z++;  x++;
    }
}
