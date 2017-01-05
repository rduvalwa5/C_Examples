/*
 * c_clock2.cpp
 *
 *  Created on: Jan 4, 2017
 *  http://stackoverflow.com/questions/13510758/time-h-clock-broken-on-os-x
 */

#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(int argc, char *argv[])
{

    printf("Clock: %f\n", clock() / (double)CLOCKS_PER_SEC);
    sleep(2);
    printf("Clock: %f\n", clock() / (double)CLOCKS_PER_SEC);
    sleep(4);
    printf("Clock: %f\n", clock() / (double)CLOCKS_PER_SEC);
    sleep(1);
 /*
  	Description
	The C library function clock_t clock(void) returns the number of clock ticks elapsed since
	the program was launched. To get the number of seconds used by the CPU,
	you will need to divide by CLOCKS_PER_SEC.

	On a 32 bit system where CLOCKS_PER_SEC equals 1000000 this function will return the same
	value approximately every 72 minutes.
 */

    clock_t tick = clock();
    printf("tick is %lu\n", (double)tick);
    printf("used ticks is %d\n", (double)tick/CLOCKS_PER_SEC);
    sleep(2);
    tick = clock();
    printf("after 2 tick is %d\n",  (double)tick);
    printf("used ticks is %d\n", (double)tick/CLOCKS_PER_SEC);
    return 0;
}

/*
Clock: 0.002851
Clock: 0.002916
Clock: 0.003015
tick is 3113
after 2 tick is 3202
 */
