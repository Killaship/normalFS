#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int *blocks[64];
int main() {
	for(int i = 0; i < 63; i++) {
		blocks[i] = malloc(4096);
	}
	return 0;
}
