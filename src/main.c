#include "Bitmask.h"
#include <stdio.h>

//Define a Size
#define Size 10
Bitmask* mask;

//A Function to print a binary representation
void PrintAll()
{
    for (size_t i = 0; i < Size; ++i) 
        printf("%d", Bitmask_Get(mask, i));
    printf("\n");
}

int main() 
{
    mask = Bitmask_Init(Size);

    // Set some values
    Bitmask_Set(mask, 0); 
    Bitmask_Set(mask, 2); 
    Bitmask_Set(mask, 5); 
    Bitmask_Set(mask, 7); 
    Bitmask_Set(mask, 6); 

    // Print binary representation
    PrintAll();

    printf("Value at Index 2: %d\n", Bitmask_Get(mask, 2));
    printf("Value at Index 7: %d\n", Bitmask_Get(mask, 7));

    Bitmask_Unset(mask, 2);

    printf("Value at Index 2: %d\n", Bitmask_Get(mask, 2));

    printf("Size of Bitmask: %d\n", mask->size);

    // Print binary representation again
    PrintAll();

    return 0;
}