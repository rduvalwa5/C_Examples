/*
 * enumConst2.c
 *
 *  Created on: Jun 17, 2021
 *      Author: rduvalwa2
 */

//#include<stdio.h>

//enum Products { HardDrive = 0, PenDrive = 4, Keyboard = 8 };

//int main() {

//      printf("Stock for %d is more than %d ?", HardDrive, PenDrive);
//      printf( "{0}{1}",PenDrive > Keyboard > 0 ? "Yes" : "No",  "\n" );

//}

#include<stdio.h>
//inline int mul(int a, int b) //inline function declaration{
//   return(a*b);
//}

enum Products { Harddrive = 0, Pendrive = 4, Keyboard = 8 };

int main(){
   int c;
//   c=mul(2,3);

   int max;
   max = Pendrive > Keyboard ? Pendrive : Keyboard;

   printf("Max :%d\n",max);
   return 0;
}

/*
#include <iostream>
using namespace std;
int main() {
   int a = 10;
   int b = 20;
   int max = a > b ? a : b;
   cout << "Maximum value = " << max << "\n";
   return 0;
}
*/
