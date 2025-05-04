/**************************************************************
* Class::  CSC-415-02 Spring 2025
* Name:: Samuel Dolan, Miguel Abalos, Ting Feng
* Student IDs:: 923626272, 916939522
* GitHub-Name:: migwelabalos
* Group-Name:: Breakfast Club
* Project:: Basic File System
*
* File:: dir.c
*
* Description:: 
*	
**************************************************************/
#include <string.h>
#include "dir.h"

dir * createDir(int numDirEntries, dir * parent) {
    
    int initSpaceNeeded = numDirEntries * sizeof (dir);
    int blocksNeeded = (initSpaceNeeded / ());  //need block size variable
    return NULL;
}

int loadDir(dir * toLoad) {
    //need to implement
    return 0;
}

int writeDir(dir * toWrite) {
    //need to implement
    return 0;
}