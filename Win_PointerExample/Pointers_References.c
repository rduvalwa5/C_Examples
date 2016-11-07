/*
 * Pointers_References.c
 *
 *  Created on: oct 23, 2016
 *      Author: rduvalwa2
 */

#include<stdio.h>
#include <string.h>

char * null_initialize(char arr[]);

char *  null_initialize(char arr[]){
	int size = 0;
	for(size = 0; size < strlen(arr); size++){ arr[size] = '\0';}
	return(arr);
	}

int main()
{
    /*
     * Simple array construct
     */
    int i = 0;
    int size = 5;
    char arrCh[100];
    char * arrChar;
    arrChar =  null_initialize(arrCh);
    printf("size of arrChar is %d\n", sizeof(arrChar));
    printf("lenth of arrChar is %d\n", strlen(arrChar));
    char str[] =  {'a','b','c','d','e','f','g','\0'};

    for(i = 0; i < strlen(str); i++){
    	arrChar[i] = str[i];
    }
    printf("arrChar is %s size is %d\n",arrChar, strlen(arrChar));
    arrChar =  null_initialize(arrCh);
    printf("arrChar now is %s\n",arrChar);
    int index = 0;
    for(i = 65; i< (65+58); i++){
    	if((i < 91) || (i > 96)){
    	arrChar[index] = (char)i;
       	index++;
    	}
    }
    arrChar[index] = '\0';
    printf("\n");
    for(i = 0; i < strlen(arrChar); i++){printf("%c",arrChar[i]);}

    printf("\narrChar changed to %s size is %d\n",arrChar, strlen(arrChar));

    int arr2[] = {1,2,3,4,5,'\0'};
    int arr1[] = {1,2,3,4,5};
    printf("\nSize is %d Size of array is %d\n",size, (int)(sizeof(arr2)/sizeof(arr2[0])));
    printf("Size is %d Size of array is %d\n",size, (int)(sizeof(arr1)/sizeof(arr1[0])));
    printf("Null is \n", arr2[size]);

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

    return 0;
}
