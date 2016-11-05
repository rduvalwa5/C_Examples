/*
 * Pointers_References.c
 *
 *  Created on: oct 23, 2016
 *      Author: rduvalwa2
 */

#include<stdio.h>
#include <string.h>

int main()
{
    /*
     * Simple array construct
     */
    int size = 5;
    char arrChar[] = {'a','b','c','d','e','\0'};
    int arr2[] = {1,2,3,4,5,'\0'};
    int arr1[] = {1,2,3,4,5};
    printf("Size is %d Size of array is %d\n",size, (int)(sizeof(arr2)/sizeof(arr2[0])));
    printf("Size is %d Size of array is %d\n",size, (int)(sizeof(arr1)/sizeof(arr1[0])));
    printf("Null is \n", arr2[size]);
    int i = 0;
//    arr2[size] = '\0';
//    for(i=0;i<sizeof(arr2);i++)
//    {
//      arr2[i] = i; // Initializing each element seperately
//    }
    printf("Size of array is %d\n",sizeof(arr2));
    printf("*arr2 points to first element of array and is %d\n",*arr2);

    for(i = 0; i < sizeof(arrChar)/sizeof(arrChar[0]); i++){
        printf("*arr2 points to element %d of array and is %c\n",i, arrChar[i]);
    }
    printf("&arr2 is the address of arr2 and value is is %i\n",&arr2);
    printf("&arr2[0] is the address of arr2 and value is is %i\n",&arr2[0]);
    printf("&arr2[1] is the address of arr2 and value is is %i\n",&arr2[1]);


    int el = 0;
    for(el=0; el < size; el++)
    {
    	printf("arr2 element %d is  %d \n",el, arr1[el]);
    	printf("Refer to Address &arr2[el] address is %i \n",&arr1[el]);
       	printf("Pointer address is %d Point to value at address *arr1 value = %d \n",&arr1[el], *arr1 + el);
    }


    for(el=sizeof(arr2); el > -1; el--)
    {
    	printf("el is %d \n", el);
    	printf("arr2 %d \n",arr2[el]);
    	printf("Refer to Address &arr2 address is %i \n",&arr2[el]);
       	printf("X Point to value at address *arr2 value = %d \n",*arr2 + el);
    }

    /* do it in reverse

    int reversed[size]; // still don't know why array size ends up 4 time declared size
    reversed[size]= '\0';

    int index = 0;
    for(el=sizeof(arr2); el > 0; el--)
    {
    	reversed[index] = arr2[el];
    	printf("reversed is %d \n", reversed[index]);
    	index++;
    }
    printf("reversed array is %s",&reversed);

    for(el=0;el < sizeof(reversed);el++)
    {
    	printf("reversed[el] is %d \n",reversed[el]);
    }

    char charArray[5] = {'a','b','c','d','e'};

    printf("charArray is %s\n",&charArray);
    for(int i = 0; i < sizeof(charArray); i++){
    	printf("%s \n",&charArray[i]);
    }

 */

    return 0;
}


