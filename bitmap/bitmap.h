#include <stdint.h>

typedef struct bitmapset { 
    uint32_t map; 
    uint8_t size;  
} bitmapset;    


void init_bitmapset(bitmapset *bm); 

void set(bitmapset *bm, uint8_t v); 

uint8_t get(bitmapset *bm, uint8_t v); 

uint8_t size(bitmapset *bm);

void unset(bitmapset *bm, uint8_t v); 

void binprintf(bitmapset *bm);