/*
 * qsort.c
 * http://www.cplusplus.com/reference/cstdlib/qsort/
 *  function
	<cstdlib>
	qsort
	void qsort (void* base, size_t num, size_t size,
            	int (*compar)(const void*,const void*));
	Sort elements of array
	Sorts the num elements of the array pointed to by base, each element size bytes long,
	using the compar function to determine the order.

	The sorting algorithm used by this function compares pairs of elements by calling
	the specified compar function with pointers to them as argument.

	The function does not return any value, but modifies the content of the array
	pointed to by base reordering its elements as defined by compar.

	The order of equivalent elements is undefined.

	Parameters
	base	Pointer to the first object of the array to be sorted, converted to a void*.
	num		Number of elements in the array pointed to by base.
			size_t is an unsigned integral type.
	size	Size in bytes of each element in the array.
			size_t is an unsigned integral type.
	compar	Pointer to a function that compares two elements.
			This function is called repeatedly by qsort to compare two elements.
			It shall follow the following prototype:

 	 	 	 int compar (const void* p1, const void* p2);

			Taking two pointers as arguments (both converted to const void*).
			The function defines the order of the elements by returning (in a stable
			and transitive manner):
	return value	meaning
	<0				The element pointed to by p1 goes before the element pointed to
					by p2
	0				The element pointed to by p1 is equivalent to the element pointed
					to by p2
	>0				The element pointed to by p1 goes after the element pointed to
					by p2

 */


/* qsort example */
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* qsort */

int values[] = { 40, 10, 100, 90, 20, 25,-1,0 };
char charValues[] = {'z','A','m','N','b','a','f','s','a'};
int convertedChar[9];
int compare (const void * a, const void * b)
{
//  printf("Result of %d - %d is %d  \n",*(int*)a, *(int*)b,*(int*)a - *(int*)b);
  return ( *(int*)a - *(int*)b );
}

void convertAlph2Dec()
{
	int i;
	for(i = 0; i < sizeof(charValues); i++){
		convertedChar[i] = (int)charValues[i];
//		printf("%d ,%d\n",i,convertedChar[i]);
	}
}

int main ()
{
  int n;
/*
  printf("No sort\n");
  for (n=0; n<8; n++)
     printf ("%d ",values[n]);

  qsort (values, 8, sizeof(values[0]), compare);
  printf("Sorted with Qsort\n");
  for (n=0; n<8; n++)
     printf ("%d ",values[n]);
  printf("\n\n");
  printf("No sortchar values \n");
  for (n = 0; n < 9; n++)
     {printf ("%c,",charValues[n]);}
*/
  convertAlph2Dec();
  printf("Print convertedChar size is %lu\n", sizeof(convertedChar));
  for (n=0; n<9; n++)
     printf ("%d,",convertedChar[n]);

  printf("\n");
  qsort (convertedChar, 9, sizeof(convertedChar[0]), compare);

  printf("\nconvertedChar Sorted with Qsort\n");
  for (n=0; n<9; n++)
     printf ("%d,",convertedChar[n]);
  printf("\n");
  for (n=0; n<9; n++)
     printf ("%c,",convertedChar[n]);
  printf("\n");

//  for (n=0; n<sizeof(charValues); n++)
//     printf ("%c , %lu \n",charValues[n],sizeof(charValues[n]));

  qsort (charValues, 9, sizeof(charValues[0]), compare);

  printf("\ncharValues Sorted with Qsort\n");
  for (n=0; n<9; n++)
     printf ("%c,",charValues[n]);

  for (n=0; n<9; n++)
     printf ("%d,",charValues[n]);


  return 0;
}
