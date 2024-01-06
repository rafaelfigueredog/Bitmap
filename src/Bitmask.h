#ifndef BITMASK_H
#define BITMASK_H

#include <stdint.h>
#include <stdlib.h>

typedef struct {
    uint8_t *bits;
    size_t size;
} Bitmask;

Bitmask* Bitmask_Init(size_t Size);
void Bitmask_Destroy(Bitmask* bitmap);

void Bitmask_Set(Bitmask* bitmap, size_t Index);
void Bitmask_Unset(Bitmask* bitmap, size_t Index);

int8_t Bitmask_Get(Bitmask* bitmap, size_t Index);

#endif /* BITMASK_H */