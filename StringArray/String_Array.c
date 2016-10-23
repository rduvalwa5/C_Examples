/*
 * String_Array.c
 *http://www.thegeekstuff.com/2011/12/c-arrays/
 *  Created on: Oct 22 2016
 *      Author: rduvalwa2
 *      change and fix
 */


#include<stdio.h>
#include<string.h>

int SIZE = 3;

int main()
{
    // Declaring/Initializing three characters pointers
    char *ptr1 = "Enterprise";
    char *ptr2 = "Saratoga";
    char *ptr3 = "Hornet";

    //Declaring an array of 3 char pointers
    char* arr[SIZE];

    printf("1 = %d, 2 = %d, 3 = %d \n", (int)sizeof(ptr1), (int)sizeof(ptr2),(int)sizeof(ptr3));


    // Initializing the array with values
    arr[0] = ptr1;
    arr[1] = ptr2;
    arr[2] = ptr3;

    int numberOfElements = (int)sizeof(arr)/(int)sizeof(ptr1);
    printf("Number of elements is %d\n", numberOfElements);
    //Printing the values stored in array

    printf("%s \n", arr[0]);
    printf("%s \n", arr[1]);
    printf("%s \n", arr[2]);
    printf("Why the fuck does this not print!!!\n");
    printf("size of pointers in bytes is %d \n", (int)(sizeof(arr)));
    int i = 0;
    for(i = 0 ; i < SIZE; i++)
    	{
    		int a = strlen((arr[i]));

    		printf("String %s size by number of elements %d \n", arr[i],a );
    	}

    /*
     * Simple array construct
     */
    printf("\n******** into simple construct ********\n");
    int size = 1;
    int arr2[size];
    printf("Size of array is %d\n",(int)sizeof(arr2));

    i = 0;

    for(i=0;i<(int)sizeof(arr2);i++)
    {
      arr2[i] = i*i; // Initializing each element seperately
    }
    printf("Size of array is %d\n",(int)sizeof(arr2));
    int el = 0;
    for(el=0; el < (int)sizeof(arr2); el++)
    {
    	printf("el is %d \n", el);
    	printf("arr2 %d \n",arr2[el]);
    	printf("Address &arr2 %d \n",&arr2[el]);
       	printf("Value at address *arr2 %d \n",*arr2 + el);
    }    return 0;
}

