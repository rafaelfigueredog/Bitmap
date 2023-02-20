# Bitmap Implementation
This is a simple implementation of a bitmap using C language. Bitmap is a data structure that is used to represent a set of integers as bits. This implementation includes four basic operations: set(), get(), unset(), and size().

## Getting Started
To get started, you need to include the bitmap.h header file in your C program.

~~~C
#include "bitmap.h"
~~~~

## Initialization
Before using the bitmap, you need to initialize it by calling init_bitmapset() function.

~~~C
bitmapset my_bitmap;
init_bitmapset(&my_bitmap);
~~~~

## Basic Operations

`set()`
This function sets a bit at the specified position to 1.

~~~C
set(&my_bitmap, 2);
~~~~

`get()`
This function returns the value of a bit at the specified position.

~~~~C
uint8_t val = get(&my_bitmap, 2);
~~~~

`unset()`
This function sets a bit at the specified position to 0.

~~~C
unset(&my_bitmap, 2);
~~~

`size()`
This function returns the number of bits set to 1 in the bitmap.

~~~C
uint8_t bitmap_size = size(&my_bitmap);
~~~~

`binprintf()`
This function prints the binary representation of the bitmap.

~~~C
binprintf(&my_bitmap);
~~~~

## Authors
[Rafael Guimarães](https://github.com/rafaelfigueredog)

## License
This project is licensed under the [MIT License](https://opensource.org/license/mit/)
