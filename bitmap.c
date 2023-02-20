#include "bitmap.h"
#include <stdint.h>
#include <stdio.h>

#define BITMAP_SIZE 32
#define MAX_BIT_INDEX (BITMAP_SIZE - 1)

void initializeBitmapSet(BitmapSet *bitmapSet) {
  bitmapSet->map = 0;
  bitmapSet->size = 0;
}

void setValue(BitmapSet *bitmapSet, uint8_t bitIndex) {
  if (bitIndex > MAX_BIT_INDEX) {
    return;
  }

  if (getValue(bitmapSet, bitIndex)) {
    return;
  }

  uint32_t mask = 1;
  bitmapSet->map |= (mask << (MAX_BIT_INDEX - bitIndex));
  bitmapSet->size++;
}

uint8_t getValue(const BitmapSet *bitmapSet, uint8_t bitIndex) {
  if (bitIndex > MAX_BIT_INDEX) {
    return 0;
  }

  return (bitmapSet->map & (1 << (MAX_BIT_INDEX - bitIndex))) != 0;
}

uint8_t getSize(const BitmapSet *bitmapSet) { return bitmapSet->size; }

void unsetValue(BitmapSet *bitmapSet, uint8_t bitIndex) {
  if (bitIndex > MAX_BIT_INDEX) {
    return;
  }

  if (!getValue(bitmapSet, bitIndex)) {
    return;
  }

  uint32_t mask = UINT32_MAX ^ (1 << (MAX_BIT_INDEX - bitIndex));
  bitmapSet->map &= mask;
  bitmapSet->size--;
}

void printBitMap(const BitmapSet *bitmapSet) {
  uint32_t bitIndex = MAX_BIT_INDEX;
  printf("\n");
  while (bitIndex != UINT32_MAX) {
      printf("%d", (bitmapSet->map & (1 << bitIndex)) ? 1 : 0);
      if (bitIndex % 4 == 0) {
          printf(" ");
      }
      bitIndex--;
  }
  printf("\n");
}