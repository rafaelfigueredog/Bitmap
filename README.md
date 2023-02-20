# Bitmap Library
This is a C library for handling bitmaps. It includes functions for initializing a BitmapSet, setting and unsetting bits, retrieving the value of a bit, and printing the binary value of a BitmapSet.

## Getting Started
Include the bitmap.h header file in your project.

~~~C
#include "bitmap.h"
~~~

## Initialization
Before using the bitmap, you need to initialize it by calling `initializeBitmapSet()` function.

~~~C
BitmapSet bitmapSet;
initializeBitmapSet(&bitmapSet);
~~~

## Basic Operations

- Use `setValue()` to set a bit in the bitmap.

~~~C
setValue(&bitmapSet, 1);
~~~

- Use `getValue()` to retrieve the value of a bit in the bitmap.

~~~C
getValue(&bitmapSet, 1);
~~~


- Use `getSize()` to retrieve the number of set bits in the bitmap.

~~~C
getSize(&bitmapSet);
~~~


- Use `unsetValue()` to unset a bit in the bitmap.

~~~C
unsetValue(&bitmapSet, 1);
~~~


- Use `printBinaryValue()` to print the binary value of the bitmap.

~~~C
printBinaryValue(&bitmapSet);
~~~



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

## Output

~~~shell
Value at index 5: 1
Number of set bits: 4
Value at index 3: 0
Number of set bits: 3
Binary value: 
0100 0101 0000 0000 0000 0000 0000 0000
~~~
