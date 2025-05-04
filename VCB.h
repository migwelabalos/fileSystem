/**************************************************************
* Class::  CSC-415-02 Spring 2025
* Name:: Samuel Dolan, Miguel Abalos, Ting Feng
* Student IDs:: 923626272, 916939522
* GitHub-Name:: Geist-Spieler
* Group-Name:: Breakfast Club
* Project:: Basic File System
*
* File:: VCB.h
*
* Description:: 
*
**************************************************************/
#ifndef VCB_H
#define VCB_H

#include <stdint.h>

//defines
#define BLOCK_SIZE 512
#define SIG 'brkfstcb'
#define VOLUME_SIZE 19531
#define TABLE_SIZE 77

typedef struct VCB {

    char sig[8];
    int tableLoc;
    int rootLoc;
    int volumeSize;
    int blockSize;
    int tableSize;
    int blocksFree; //I think this should be kept track of my the FAT table...

} VCB;

VCB * initVCB(uint64_t numberOfBlocks, uint64_t blockSize); //POSSIBLY UNNECESSARY

int checkVCB(VCB * toCheck);                                //POSSIBLY UNNECESSARY

int initFAT(VCB * vcb);

#endif  //vcb.h