/*
 * string_arrayx.c
 *
 *  Created on: Oct 24, 2016
 *      Author: rduvalwa2
 *
 *  https://en.wikipedia.org/wiki/C_string_handling#Overview_of_functions
 *  https://www.tutorialspoint.com/c_standard_library/c_function_strxfrm.htm
 */

#include <stdio.h>
#include <String.h>


/*
 * C function proto type
 */
int compareStrings(char *, char *);
void concatenateStrings(char* s1, char* s2);
void copy_string_to_string(char* s1, char* s2);
int transform_string(char* s1, char* s2, int len);
void limited_concatenateStrings(char* s1, char* s2, int len);
void limited_copy_string_to_string(char* s1, char* s2, int len);
//()

int MAX_NUMBER_STRINGS = 4;

/*
 * char *strncpy(char *dest, const char *src, size_t n)
 * The C library function char *strncpy(char *dest, const char *src, size_t n) copies
 * up to n characters from the string pointed to, by src to dest. In a case where the
 * length of src is less than that of n, the remainder of dest will be padded with null
 * bytes.
 */

void limited_copy_string_to_string(char* dest, char* src, int len){
			strncpy(dest, src, len);
}

/*
 * The C library function char *strncat(char *dest, const char *src, size_t n)
 * appends the string pointed to by src to the end of the string pointed to by dest
 * up to n characters long.
 */

void limited_concatenateStrings(char* s1, char* s2, int len){
		strncat(s1, s2, len);
}


/*
 *The C library function size_t strxfrm(char *dest, const char *src, size_t n)
 *The transforms the first n characters of the string src into current locale
 *The and place them in the string dest.
 */

int transform_string(char* dest, char* src, int length){
	int transformed_length = strxfrm(dest, src, length);
	return  transformed_length;
}


/*
 * strcpy(s1, s2);
 * Copies string s2 into string s1.
 */

void copy_string_to_string(char* s1,char* s2){
		strcpy(s1, s2);
}

/*
 * C compare strings
 */
int compareStrings(char* s1,char* s2){
	int result = 0;
	result = strcmp(s1, s2);
	return  result;
}

/*
 * string concatenate strcat(s1, s2);
 * Concatenates string s2 onto the end of string s1.
 */
void concatenateStrings(char* s1, char* s2 ){
//		printf("concatenate %s to %s\n", s1, s2);
		strcat(s1, s2);
//		printf("cat is %s \n", strcat(s1, s2));
	}


int main(){
	/*
	 * Example of how to instanciate an array of string:
	 * 1) declare a char array of pointers
	 * 2) initiate with strings
	 * 3) in this example do not need to declare size
	 */
	/*
	 * create a char pointer to a string
	 */

	 char *one = "The quick brown coyote.";
	 char *two = "The coyote jumped over the lazy dog.";
	 char *three = "The coyote got Mary's little lamb had been.";
	 char *four = "Eat lamb coyotes can't be wrong.";

	 /*
	  * create an array of char pointers
	  */
	char *stringArray[] = {"This is String one.","String 2","String 3","At last String 4."};

	char *comp = "The quick brown coyote.";

	char* inputArray[MAX_NUMBER_STRINGS];
	/*
	 * add pointers to an array of pointers already created
	 */

	int i;
	for (i = 0; i< (int)(sizeof(inputArray)); i++)
	{
		if( i == 0)
			{ inputArray[i] = one;}
		if( i == 1)
			{ inputArray[i] = two;}
		if( i == 2)
			{ inputArray[i] = three;}
		if( i == 3)
			{ inputArray[i] = four;}
	}


	for (i = 0; i < 4; i++)
	{
		printf("stringarray %d  %s",i, stringArray[i]);
		printf("\n");
	}

	for (i = 0; i< MAX_NUMBER_STRINGS ; i++)
	{
		printf("inputarray string %d %s",i + 1, inputArray[i]);
		printf("\n");
	}

	printf("address of inputArray %d\n", &inputArray);

	for (i = 0; i< MAX_NUMBER_STRINGS ; i++)
	{
		printf("%s\n", inputArray[i]);
		printf("memory address of pointer %d\n" , &inputArray[i]);
	}

	int st = 0;
/*
 * demonstrate referencing the address of an element
 * &one[i]
 */

	for (st = 0; st < MAX_NUMBER_STRINGS ; st++){
		printf("%s\n",inputArray[st]);
		for (i = 0; i <  strlen(inputArray[st]) ;i++)
				{

					if(st == 0){ printf("%c  %d\n", one[i],&one[i]);}
					if(st == 1){ printf("%c  %d\n", two[i],&two[i]);}
					if(st == 2){ printf("%c  %d\n", three[i],&three[i]);}
					if(st == 3){ printf("%c  %d\n", four[i],&four[i]);}
				}
		}


	for (st = 0; st < MAX_NUMBER_STRINGS ; st++){
//		printf("%s , %s \n",one, inputArray[st]);
		if(compareStrings(comp, inputArray[st]) == 0){
			printf("%s , %s \n",one, inputArray[st]);
			printf("Compare result is %d\n", compareStrings(comp, inputArray[st]));
			}
		}

	char first [50] = "This is the first string.";
	char second [50] = "Now the second string.";

	printf("Before: %s\n", first);
	concatenateStrings(first, second);
	printf("After: %s\n", first);

	printf("second before: %s\n", second);

	copy_string_to_string(second, first);
	printf("second after: %s\n", second);

	char transfrm[10];
	char source[] = "This is the source of all mens whoes!";
	char source2[] = "Lest we forget our purpose, we go forward toward our end!";
	char source3[] = "Fuck this!";
	int x;

	x = transform_string(transfrm,source, 50);
	printf("length = %d , string is \"%s\"\n",x, transfrm);

	x = transform_string(transfrm,source2, 60);
	printf("length = %d , string is \"%s\"\n",x, transfrm);

	x = transform_string(transfrm,source3,5);
	printf("length = %d , string is \"%s\"\n",x, transfrm);

	char source4[] = "Lest we forget our purpose, we go forward toward our end!";
	limited_concatenateStrings(source3,source4,26);
	printf("the string is \"%s\"\n",source3);

	char destination [50];
	limited_copy_string_to_string(destination, source4, 33);
	printf("destinationn is now \"%s\"\n", destination);

}

/* Code output
stringarray 0  This is String one.
stringarray 1  String 2
stringarray 2  String 3
stringarray 3  At last String 4.
inputarray string 1 The quick brown coyote.
inputarray string 2 The coyote jumped over the lazy dog.
inputarray string 3 The coyote got Mary's little lamb had been.
inputarray string 4 Eat lamb coyotes can't be wrong.
address of inputArray 1554768064
The quick brown coyote.
memory address of pointer 1554768064
The coyote jumped over the lazy dog.
memory address of pointer 1554768072
The coyote got Mary's little lamb had been.
memory address of pointer 1554768080
Eat lamb coyotes can't be wrong.
memory address of pointer 1554768088
The quick brown coyote.
T  51653872
h  51653873
e  51653874
   51653875
q  51653876
u  51653877
i  51653878
c  51653879
k  51653880
   51653881
b  51653882
r  51653883
o  51653884
w  51653885
n  51653886
   51653887
c  51653888
o  51653889
y  51653890
o  51653891
t  51653892
e  51653893
.  51653894
The coyote jumped over the lazy dog.
T  51653896
h  51653897
e  51653898
   51653899
c  51653900
o  51653901
y  51653902
o  51653903
t  51653904
e  51653905
   51653906
j  51653907
u  51653908
m  51653909
p  51653910
e  51653911
d  51653912
   51653913
o  51653914
v  51653915
e  51653916
r  51653917
   51653918
t  51653919
h  51653920
e  51653921
   51653922
l  51653923
a  51653924
z  51653925
y  51653926
   51653927
d  51653928
o  51653929
g  51653930
.  51653931
The coyote got Mary's little lamb had been.
T  51653933
h  51653934
e  51653935
   51653936
c  51653937
o  51653938
y  51653939
o  51653940
t  51653941
e  51653942
   51653943
g  51653944
o  51653945
t  51653946
   51653947
M  51653948
a  51653949
r  51653950
y  51653951
'  51653952
s  51653953
   51653954
l  51653955
i  51653956
t  51653957
t  51653958
l  51653959
e  51653960
   51653961
l  51653962
a  51653963
m  51653964
b  51653965
   51653966
h  51653967
a  51653968
d  51653969
   51653970
b  51653971
e  51653972
e  51653973
n  51653974
.  51653975
Eat lamb coyotes can't be wrong.
E  51653977
a  51653978
t  51653979
   51653980
l  51653981
a  51653982
m  51653983
b  51653984
   51653985
c  51653986
o  51653987
y  51653988
o  51653989
t  51653990
e  51653991
s  51653992
   51653993
c  51653994
a  51653995
n  51653996
'  51653997
t  51653998
   51653999
b  51654000
e  51654001
   51654002
w  51654003
r  51654004
o  51654005
n  51654006
g  51654007
.  51654008
The quick brown coyote. , The quick brown coyote.
Compare result is 0
Before: This is the first string.
After: This is the first string.Now the second string.
second before: Now the second string.
second after: This is the first string.Now the second string.
length = 37 , string is "This is the source of all mens whoes!"
length = 57 , string is "Lest we forget our purpose, we go forward toward our end!"
length = 10 , string is "Fuck"
the string is "Fuck this!Lest we forget our purpose"
destinationn is now "Lest we forget our purpose, we go"

 */
