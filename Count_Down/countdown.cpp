/*
 * countdown.cpp
 *
 *  Created on: Jan 2, 2017
 *      Author: rduvalwa2
 */

/* clock example: countdown */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/types.h>
#include <sys/select.h>
#include <unistd.h>

double wait ( double sec )
{
  printf("Entered wait\n");
//  sleep(5);
  clock_t endwait;
  endwait = clock () + sec * CLOCKS_PER_SEC ;
  while (clock() < endwait) {}//
  	  printf("endwait is %ld", endwait);
  return endwait;
}

int main (int argc, char * argv[])
{
  double start = clock();
  // suseconds_t t1,t2;
  long t1,t2;
  int n = 0, clicks = 0;
  double sec;
  double end;
  sec = atof(argv[1]);
  printf ("Starting countdown...\n");
  start = clock(); //number of clicks counted since program start
  printf( "At Start Clock clicks are %f", start);
  start = wait (sec);
  time(&t1);
  printf("Wait is %f\n", start);
  printf("t1 time is %ld \n", t1 );

  for (n=10; n>0; n--)
  {
    printf ("%d\n",n);
    wait (sec);
    end = wait (sec);
    printf("Wait is %f", wait(sec));
  }


  printf("Wait is %f\n", end);
  time(&t2);
  printf("t2 time is %ld \n", t2);
  printf("Time t2 is  %d time t1 is %d", (int)t2, (int)t1 );
  printf("Run time is %ld\n ", (int)t2-t1);
  printf("Run time is %f \n", (float)difftime(t2,t1));
  end = clock(); //number of clicks counted since program start
  printf("Total Clock clicks were %f\n",(end - start));
  printf("Clock clicks were per clock %d", clicks);
  printf("Run time by  calculating clicks by second were %f", (end-start)/clicks );
  printf("\nTime t2 is %f and time t1 is %f\n", (float) t2,(float)t1);
  printf("\nTime to run %f seconds\n",(float) t2-t1);

  return 0;
}

/*
OSXAir:Debug rduvalwa2$ Count_Down 3
-bash: Count_Down: command not found
OSXAir:Debug rduvalwa2$ ./Count_Down 3
Starting countdown...
At Start Clock clicks are 2057.000000Entered wait
endwait is 3002099Wait is 3002099.000000
t1 time is 1483520122
10
Entered wait
endwait is 6002173Entered wait
endwait is 9002201Entered wait
endwait is 12002249Wait is 12002249.0000009
Entered wait
endwait is 15002304Entered wait
endwait is 18002363Entered wait
endwait is 21002414Wait is 21002414.0000008
Entered wait
endwait is 24002465Entered wait
endwait is 27002517Entered wait
endwait is 30002569Wait is 30002569.0000007
Entered wait
endwait is 33002632Entered wait
endwait is 36002677Entered wait
endwait is 39002728Wait is 39002728.0000006
Entered wait
endwait is 42002789Entered wait
endwait is 45002841Entered wait
endwait is 48002898Wait is 48002898.0000005
Entered wait
endwait is 51002957Entered wait
endwait is 54003020Entered wait
endwait is 57003080Wait is 57003080.0000004
Entered wait
endwait is 60003140Entered wait
endwait is 63003194Entered wait
endwait is 66003246Wait is 66003246.0000003
Entered wait
endwait is 69003302Entered wait
endwait is 72003339Entered wait
endwait is 75003400Wait is 75003400.0000002
Entered wait
endwait is 78003456Entered wait
endwait is 81003513Entered wait
endwait is 84003574Wait is 84003574.0000001
Entered wait
endwait is 87003630Entered wait
endwait is 90003674Entered wait
endwait is 93003730Wait is 93003730.000000Wait is 90003674.000000
t2 time is 1483520362
Time t2 is  1483520362 time t1 is 1483520122Run time is 240
 Run time is 240.000000
Total Clock clicks were 90001699.000000
Clock clicks were per clock 0Run time by  calculating clicks by second were inf
Time t2 is 1483520384.000000 and time t1 is 1483520128.000000

Time to run 256.000000 seconds
 */


