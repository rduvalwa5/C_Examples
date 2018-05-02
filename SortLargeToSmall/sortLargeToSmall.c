/*
 * sort.c
 *	page 460 New C Primer
 *  Created on: Apr 21, 2015
 *      Author: rduvalwa2
 */
#include <stdio.h>

void sortLargestToSmallest(int array[], int limit){
	int top,search,temp;

	for(top = 0; top < limit - 1; top++){
		for(search = top +1; search < limit; search++){
		if (array[search] > array[top]){
			temp = array[search];
			array[search] = array[top];
			array[top] = temp;
		}
	  }
	}
 }


int main (int argc, char * argv[])
{
//	int a[] = {9,6,3,1,2,0,-1,5,199,99};
	int a[] = {(int)'z',(int)'c',(int)'a',(int)'m',(int)'Y',(int)'a',(int)'D'};
	/*
	 * Note how to determine size of array
	 * it is the size of the array divided by the byte size of the first element
	 */
	int limit = sizeof(a)/sizeof(a[0]);
	printf("unsorted\n");
	for(int i= 0; i < limit ; i++){
		printf("%d,",a[i]);
	}
	for(int i= 0; i < limit ; i++){
			printf("%c,",a[i]);
	}

	sortLargestToSmallest(a,limit);

	printf("\nsorted \n");
	for(int i= 0; i < limit ; i++){
		printf("%d,",a[i]);
	}
	for(int i= 0; i < limit ; i++){
			printf("%c,",a[i]);
	}
}
/*
  	unsorted
	122,99,97,109,89,97,68,z,c,a,m,Y,a,D,
	sorted
	122,109,99,97,97,89,68,z,m,c,a,a,Y,D,
 */
