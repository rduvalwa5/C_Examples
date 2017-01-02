/*
 * gmt_time.c
 *
 *  Created on: Dec 31, 2016
 *      Author: rduvalwa2
 */

/* Example using gmtime by TechOnTheNet.com */

#include <stdio.h>
#include <time.h>

#define PDT (-7)

int main(int argc, const char * argv[])
{
    /* Define temporary variables */
    struct tm *gtime;
    int now;

    /* Read the current system time */
    time(&now);

    /* Convert the system time to GMT (now UTC) */
    gtime = gmtime(&now);

    /* Display the time in PDT and UTC */
    printf ("Pacific Daylight Time: %2d:%02d\n", (gtime->tm_hour + PDT) % 24, gtime->tm_min);
    printf ("Universal Time:        %2d:%02d\n", gtime->tm_hour % 24, gtime->tm_min);

    return 0;
}
