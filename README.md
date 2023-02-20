# Bitmap Library
This is a C library for handling bitmaps. It includes functions for initializing a BitmapSet, setting and unsetting bits, retrieving the value of a bit, and printing the binary value of a BitmapSet.

## Get Started
1. Include the bitmap.h header file in your project.
2. Create a BitmapSet struct instance.

## Usage
1. Use `initializeBitmapSet()` to initialize the struct.
2. Use `setValue()` to set a bit in the bitmap.
3. Use `getValue()` to retrieve the value of a bit in the bitmap.
4. Use `getSize()` to retrieve the number of set bits in the bitmap.
5. Use `unsetValue()` to unset a bit in the bitmap.
6. Use `printBinaryValue()` to print the binary value of the bitmap.


## Example
Here is an example of how to use the Bitmap Library:

~~~c
#include "bitmap.h"
#include <stdio.h>

int main() {
  BitmapSet bitmapSet;
  initializeBitmapSet(&bitmapSet);

  setValue(&bitmapSet, 1);
  setValue(&bitmapSet, 3);
  setValue(&bitmapSet, 5);
  setValue(&bitmapSet, 7);

  printf("Value at index 5: %u\n", getValue(&bitmapSet, 5));
  printf("Number of set bits: %u\n", getSize(&bitmapSet));

  unsetValue(&bitmapSet, 3);

  printf("Value at index 3: %u\n", getValue(&bitmapSet, 3));
  printf("Number of set bits: %u\n", getSize(&bitmapSet));

  printf("Binary value: ");
  printBinaryValue(&bitmapSet);

  return 0;
}
~~~
