/**************************************************************
* Class::  CSC-415-02 Spring 2024
* Name:: Samuel Dolan, Miguel Abalos, Ting Feng
* Student IDs:: 923626272, 
* GitHub-Name:: migwelabalos
* Group-Name:: Breakfast Club
* Project:: Basic File System
*
* File:: fsInit.c
*
* Description:: Main driver for file system assignment.
*
* This file is where you will start and initialize your system
*
**************************************************************/


#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <string.h>

#include "fsLow.h"
#include "mfs.h"


int initFileSystem (uint64_t numberOfBlocks, uint64_t blockSize)
	{
	printf ("Initializing File System with %ld blocks with a block size of %ld\n", numberOfBlocks, blockSize);
	/* TODO: Add any code you need to initialize your file system. */

	return 0;
	}
	
	
void exitFileSystem ()
	{
	printf ("System exiting\n");
	}