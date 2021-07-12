/*
 * SizeOfVoid.c
 *
 *  Created on: Jul 11, 2021
 *      Author: rduvalwa2
 */

#include <stdio.h>

int main(void){
	printf("size of void is %d\n",sizeof(void*));
     switch(sizeof(void*)){
        case 4: printf("32\n");
        break;
        case 8: printf("64\n");
        break;
    }
}
