/*
 * sort.c
 *	page 460 New C Primer
 *  Created on: Apr 21, 2015
 *      Author: rduvalwa2
 */

void sortSmallestToLargest(int array[], int limit){
		int top,search,temp;

		for(top = 0; top < limit - 1; top++){
			for(search = top +1; search < limit; search++){
			if (array[search] < array[top]){
				temp = array[search];
				array[search] = array[top];
				array[top] = temp;
			}
		  }
		}
	}


int main (int argc, char * argv[])
{
	int b[] = {9,6,3,1,2,0,-1,5,199,99};
	int limit = sizeof(b)/sizeof(b[0]);
	printf("unsorted\n");
	for(int i= 0; i < limit ; i++){
		printf("%d,",b[i]);
	}

	sortSmallestToLargest(b,limit);

	printf("\nsorted \n");
	for(int i= 0; i < limit ; i++){
		printf("%d,",b[i]);
	}
}
