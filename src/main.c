#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int *iblocks[32];
int *dblocks[64];
struct sblock {
	int inodebitmap[32] = {0}; // bitmap of free inodes
	int dblckbitmap[64] = {0}; // bitmap of free data blocks
	int inodes;
	int dblocks;
	int itblstart;
	int dtblstart;
}
struct inode {
	char *filename[32]; // filename, including null char
	int perms; // permissions, will figure out later
	int owner; // uid of owner, figure out later
	int size; // size of file in blocks
	int blockstart; // block file begins at
	int timestamp; // unix timestamp of when file was created
	int modstamp; // unix timestamp of when file was modified
}
int main() {
	for(int i = 0; i < 63; i++) {
		dblocks[i] = malloc(4096);
	}
	
	return 0;
}
