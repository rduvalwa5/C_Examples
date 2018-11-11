/*
 * systemFindFile.c
 *
 *  https://www.tutorialspoint.com/c_standard_library/c_function_system.htm
 *  https://www.ibm.com/support/knowledgecenter/en/SSLTBW_2.1.0/com.ibm.zos.v2r1.bpxbd00/systm.htm
 */


#include <stdio.h>
#include <string.h>

int main () {
   char command[50];

   strcpy( command, "ls -l" );
   system(command);
   system("find /Users/rduvalwa2/DeskTop -name hosts.txt");
//   printf("result \n %s", result);
   return(0);
}
