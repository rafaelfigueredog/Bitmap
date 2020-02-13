#include <stdint.h>
#include <stdio.h>
#include "bitmap.h"

void init_bitmapset(bitmapset *bm) {
	bm->map = 0;
	bm->size = 0;  
}

void set(bitmapset *bm, uint8_t v) {
	if (v >= 0 && v <= 31) { 
		if ( get(bm, v) != 0 ) return ;  
		else { 
			uint32_t mask = 1; 
			bm->map =  bm->map | (mask << (31-v));
			bm->size++; 
		} 
	}
}

uint8_t get(bitmapset *bm, uint8_t v ) { 
	if (v >= 0 && v <= 31) {
		return (bm->map & (1 << (31-v))) != 0;
	}
	return -1;
}

uint8_t size(bitmapset *bm) {
	return bm->size; 
}

void unset(bitmapset *bm, uint8_t v) {
	if (v >= 0 && v <= 31) {
		if ( get(bm, v) != 1 ) return;
		else {  
			uint32_t mask = UINT32_MAX ^ (1 << (31 - v) );
			bm->map = bm->map & mask;
			bm->size--; 
		} 
	}
}

void binprintf(bitmapset *bm) {
    uint32_t it = 31;
	printf("\n"); 
    while(it <= 32) {
        printf("%d", (bm->map&(1<<it) ? 1 : 0));
        it--; 
    }
	printf("\n"); 
}
