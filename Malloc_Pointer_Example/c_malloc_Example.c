/*
 * c_malloc_Example.c
 *
 *  Created on: Jul 31, 2021
 *      Author: rduvalwa2
 *
 *  https://www.tutorialspoint.com/c_standard_library/c_function_malloc.htm
 */


#include<stdio.h>
#include <stdlib.h>
int main() {

    int* ptr1;
    // We want ptr1 to store the space of 3 integers
    ptr1 = (int*) malloc (3 * sizeof(int));

    if(ptr1==NULL){
      printf("Memory not allocated. \n");
    }
    else{printf("Memory allocated succesfully. \n");
    // This statement shows where memory is allocated
    printf("The address of the pointer is:%u\n ", ptr1);

    // Here we assign values to the ptr1 created
    for(int i=0;i<3;i++){
      ptr1[i] = i;
      printf("%d\n", &ptr1[i]);
    }
    // Printing the vlaues of ptr1 to show memory allocation is done
    for(int i=0;i<3;i++){
      printf("%d\n", ptr1[i]);
      printf("%d\n", &ptr1[i]);}

    }

   }

