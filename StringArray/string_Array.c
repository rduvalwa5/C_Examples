/*
 * string_arrayx.c
 *
 *  Created on: Oct 24, 2016
 *      Author: rduvalwa2
 */

#include <stdio.h>
#include <String.h>


/*
 * C function proto type
 */
int compareStrings(char *, char *);
void concatenateStrings(char* s1, char* s2);
void copy_string_to_string(char* s1, char* s2);

int MAX_NUMBER_STRINGS = 4;


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

}

/* Code output
 * stringarray 0  This is String one.
 * stringarray 1  String 2
 * stringarray 2  String 3
 * stringarray 3  At last String 4.
 * inputarray string 1 The quick brown coyote.
 * inputarray string 2 The coyote jumped over the lazy dog.
 * inputarray string 3 The coyote got Mary's little lamb had been.
 * inputarray string 4 Eat lamb coyotes can't be wrong.
 * address of inputArray 1415164544
 * The quick brown coyote.
 * memory address of pointer 1415164544
 * The coyote jumped over the lazy dog.
 * memory address of pointer 1415164552
 * The coyote got Mary's little lamb had been.
 * memory address of pointer 1415164560
 * Eat lamb coyotes can't be wrong.
 * memory address of pointer 1415164568
 * The quick brown coyote.
 * T  191254138
 * h  191254139
 * e  191254140
 *    191254141
 * q  191254142
 * u  191254143
 * i  191254144
 * c  191254145
 * k  191254146
 *    191254147
 * b  191254148
 * r  191254149
 * o  191254150
 * w  191254151
 * n  191254152
 *    191254153
 * c  191254154
 * o  191254155
 * y  191254156
 * o  191254157
 * t  191254158
 * e  191254159
 * .  191254160
 * The coyote jumped over the lazy dog.
 * T  191254162
 * h  191254163
 * e  191254164
 *    191254165
 * c  191254166
 * o  191254167
 * y  191254168
 * o  191254169
 * t  191254170
 * e  191254171
 *    191254172
 * j  191254173
 * u  191254174
 * m  191254175
 * p  191254176
 * e  191254177
 * d  191254178
 *    191254179
 * o  191254180
 * v  191254181
 * e  191254182
 * r  191254183
 *    191254184
 * t  191254185
 * h  191254186
 * e  191254187
 *    191254188
 * l  191254189
 * a  191254190
 * z  191254191
 * y  191254192
 *    191254193
 * d  191254194
 * o  191254195
 * g  191254196
 * .  191254197
 * The coyote got Mary's little lamb had been.
 * T  191254199
 * h  191254200
 * e  191254201
 *    191254202
 * c  191254203
 * o  191254204
 * y  191254205
 * o  191254206
 * t  191254207
 * e  191254208
 *    191254209
 * g  191254210
 * o  191254211
 * t  191254212
 *    191254213
 * M  191254214
 * a  191254215
 * r  191254216
 * y  191254217
 * '  191254218
 * s  191254219
 *    191254220
 * l  191254221
 * i  191254222
 * t  191254223
 * t  191254224
 * l  191254225
 * e  191254226
 *    191254227
 * l  191254228
 * a  191254229
 * m  191254230
 * b  191254231
 *    191254232
 * h  191254233
 * a  191254234
 * d  191254235
 *    191254236
 * b  191254237
 * e  191254238
 * e  191254239
 * n  191254240
 * .  191254241
 * Eat lamb coyotes can't be wrong.
 * E  191254243
 * a  191254244
 * t  191254245
 *    191254246
 * l  191254247
 * a  191254248
 * m  191254249
 * b  191254250
 *    191254251
 * c  191254252
 * o  191254253
 * y  191254254
 * o  191254255
 * t  191254256
 * e  191254257
 * s  191254258
 *    191254259
 * c  191254260
 * a  191254261
 * n  191254262
 * '  191254263
 * t  191254264
 *    191254265
 * b  191254266
 * e  191254267
 *    191254268
 * w  191254269
 * r  191254270
 * o  191254271
 * n  191254272
 * g  191254273
 * .  191254274
 *
 */
