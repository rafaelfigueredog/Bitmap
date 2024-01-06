# Bitmask Library

This is a C library for handling bitmasks. It includes functions for initializing a Bitmask, Setting and Unsetting bits and retrieving the value of a bit.

## Getting Started

1. Copy Bitmask.h and Bitmask.c in your Project Source

2. Include the Bitmask.h header file in your project.

    ~~~C
      #include "Bitmask.h"
    ~~~

## Initialization

Before using the bitmask, you need to initialize it by calling `Bitmask_Init(size_t Size)` function.

~~~C
size_t Size = 6;
Bitmask* bitmask;
bitmask = Bitmask_Init(Size);
~~~

## Basic Operations

- Use `Bitmask_Init(size_t Size)` to initialize
 a new `Bitmask*`.
- Use `Bitmask_Set(Bitmask* bitmap, size_t Index)` to set (or set to 1) a bit in the bitmask.
- Use `Bitmask_Unset(Bitmask* bitmap, size_t Index)` to unset (or set to 0) a bit in the bitmask.
- Use `Bitmask_Get(Bitmask* bitmap, size_t Index)` to retrieve the value of a bit in the bitmask. Note: If bitmap is null then it will return -1.

## Example

Here is an example of how to use the Bitmask Library:

~~~c
#include "Bitmask.h"
#include <stdio.h>

#define Size 10
Bitmask* mask;

void PrintAll()
{
    for (size_t i = 0; i < Size; ++i) 
        printf("%d", Bitmask_Get(mask, i));
    printf("\n");
}

int main() 
{
    mask = Bitmask_Init(Size);

    Bitmask_Set(mask, 0); 
    Bitmask_Set(mask, 2); 
    Bitmask_Set(mask, 5); 
    Bitmask_Set(mask, 7); 
    Bitmask_Set(mask, 6); 

    PrintAll();

    printf("Value at Index 2: %d\n", Bitmask_Get(mask, 2));
    printf("Value at Index 7: %d\n", Bitmask_Get(mask, 7));

    Bitmask_Unset(mask, 2);

    printf("Value at Index 2: %d\n", Bitmask_Get(mask, 2));

    printf("Size of Bitmask: %d\n", mask->size);

    PrintAll();

    return 0;
}
~~~
