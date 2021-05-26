/*
 * FileStat_Example.c
 *
 *  Created on: May 21, 2021
 *      Author: rduvalwa2
 *
 *      https://linux.die.net/man/2/stat
 *      https://stackoverflow.com/questions/20976869/check-file-attributes-in-a-c-program
 *
 *      All of these system calls return a stat structure, which contains the following fields:

    dev_t     st_dev;      ID of device containing file
    ino_t     st_ino;      inode number
    mode_t    st_mode;     protection
    nlink_t   st_nlink;    number of hard links
    uid_t     st_uid;      user ID of owner
    gid_t     st_gid;      group ID of owner
    dev_t     st_rdev;     device ID (if special file)
    off_t     st_size;     total size, in bytes
    blksize_t st_blksize;  blocksize for file system I/O
    blkcnt_t  st_blocks;   number of 512B blocks allocated
    time_t    st_atime;    time of last access
    time_t    st_mtime;    time of last modification
    time_t    st_ctime;    time of last status change
 *
 *
 *
 */


#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>

int main ( int argc, char *argv[])
{
    struct stat FileAttrib;

    if(argc <= 1)
    {
        printf("Argument missing!\n");
        exit(10);
    }

    if (stat(argv[(argc - 1)], &FileAttrib) < 0)
        printf("File Error Message = %s\n", strerror(errno));
    else
        printf( "Permissions: %d\n", FileAttrib.st_mode );
    	printf( "Size: %d\n", FileAttrib.st_size );
        printf( "Mod Time: %d\n", FileAttrib.st_mtime );
    	printf( "GroupId: %d\n", FileAttrib.st_gid );
    	printf( "UID: %d\n", FileAttrib.st_uid );
    	printf( "flags number: %d\n", FileAttrib.st_flags);

    return 0;
}

/*
 *Permissions: 33279
 *Size: 1840
 *Mod Time: 1621659677
 *GroupId: 20
 *UID: 501
 *flags number: 0
 *
 * chmod 777 FileStat_Example.c
 * -rwxrwxrwx  1 rduvalwa2  staff  1712 May 21 21:23 FileStat_Example.c
 *
 */

