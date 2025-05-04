/**************************************************************
* Class::  CSC-415-02 Spring 2025
* Name:: Samuel Dolan, Miguel Abalos, Ting Feng
* Student IDs:: 923626272, 916939522
* GitHub-Name:: migwelabalos
* Group-Name:: Breakfast Club
* Project:: Basic File System
*
* File:: mfs.c
*
* Description:: 
*	This is the file system interface implementation.
*
**************************************************************/
#include "mfs.h"

int fs_mkdir(const char *pathname, mode_t mode);
int fs_rmdir(const char *pathname);
fdDir * fs_opendir(const char *pathname);
int fs_closedir(fdDir *dirp);

char * fs_getcwd(char *pathname, size_t size);
int fs_setcwd(char *pathname);   //linux chdir
int fs_isFile(char * filename);	//return 1 if file, 0 otherwise
int fs_isDir(char * pathname);		//return 1 if directory, 0 otherwise
int fs_delete(char* filename);	//removes a file

int fs_stat(const char *path, struct fs_stat *buf);