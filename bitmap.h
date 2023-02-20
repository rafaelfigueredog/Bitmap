#ifndef BITMAPSET_H
#define BITMAPSET_H

#include <stdint.h>

#define BITMAP_SIZE 32
#define MAX_BIT_INDEX (BITMAP_SIZE - 1)

typedef struct {
  uint32_t map;
  uint8_t size;
} BitmapSet;

void initializeBitmapSet(BitmapSet *bitmapSet);
void setValue(BitmapSet *bitmapSet, uint8_t bitIndex);
uint8_t getValue(const BitmapSet *bitmapSet, uint8_t bitIndex);
uint8_t getSize(const BitmapSet *bitmapSet);
void unsetValue(BitmapSet *bitmapSet, uint8_t bitIndex);
void printBinaryValue(const BitmapSet *bitmapSet);

#endif /* BITMAPSET_H */