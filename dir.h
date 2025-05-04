/**************************************************************
* Class::  CSC-415-02 Spring 2025
* Name:: Samuel Dolan, Miguel Abalos, Ting Feng
* Student IDs:: 923626272, 916939522
* GitHub-Name:: migwelabalos
* Group-Name:: Breakfast Club
* Project:: Basic File System
*
* File:: dir.h
*
* Description:: 
*
**************************************************************/
#ifndef DIR_H
#define DIR_H

#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "fsLow.h"

#define NUM_ENTRIES_MAX 29   //arbitrary number chosen
#define MAX_NAME_LEN  50

typedef struct dir {

    size_t size;
    time_t lastAccessed;
    time_t lastModified;
    time_t timeCreated;
    int loc;
    int isDir;              //0 for dir, 1 for file
    char name[MAX_NAME_LEN];

} dir;

dir * createDir(int numDirEntries, dir * parent);

int loadDir(dir * toLoad);      //WE MUST IMPLEMENT THIS PERSONALLY, NO VIDEOS TO HELP

int writeDir(dir * toWrite);    //WE MUST IMPLEMENT THIS PERSONALLY, NO VIDEOS TO HELP

#endif  //dir.h