#include "Bitmask.h"

Bitmask *Bitmask_Init(size_t Size)
{
  Bitmask *mask = (Bitmask *)malloc(sizeof(Bitmask));

  if (mask == NULL)
    return NULL; // Failed to allocate memory for the mask

  mask->size = Size;
  // Allocate memory for the bits
  mask->bits = (uint8_t *)calloc((Size + 7) / 8, sizeof(uint8_t));

  if (mask->bits == NULL)
  {
    free(mask);  // Clean up allocated memory for the mask
    return NULL; // Failed to allocate memory for the bits
  }

  return mask;
}

void Bitmask_Destroy(Bitmask *bitmap)
{
  if (bitmap != NULL)
  {
    free(bitmap->bits);
    free(bitmap);
  }
}

void Bitmask_Set(Bitmask* bitmap, size_t Index)
{
  if (bitmap == NULL || Index >= bitmap->size)
    return; 
  
  bitmap->bits[Index / 8] |= (1 << (Index % 8));
}

void Bitmask_Unset(Bitmask* bitmap, size_t Index)
{
  if (bitmap == NULL || Index >= bitmap->size)
    return;

  bitmap->bits[Index / 8] &= ~(1 << (Index % 8));
}

int8_t Bitmask_Get(Bitmask* bitmap, size_t Index)
{
  if (bitmap == NULL || Index >= bitmap->size)
    return -1;

  return (bitmap->bits[Index / 8] >> (Index % 8)) & 1;
}
