#include <stdio.h>
#include "bitmap.h"

int main() {
    BitmapSet myBitmap;
    initializeBitmapSet(&myBitmap);

    // Set some values
    setValue(&myBitmap, 1);
    setValue(&myBitmap, 3);
    setValue(&myBitmap, 5);
    setValue(&myBitmap, 31);

    // Print binary representation
    printBinaryValue(&myBitmap);

    // Check if a value is set
    printf("Value at index 3 is set: %d\n", getValue(&myBitmap, 3));
    printf("Value at index 10 is set: %d\n", getValue(&myBitmap, 10));

    // Get size of the bitmap
    printf("Size of the bitmap: %d\n", getSize(&myBitmap));

    // Unset a value
    unsetValue(&myBitmap, 5);

    // Print binary representation again
    printBinaryValue(&myBitmap);

    // Get updated size of the bitmap
    printf("Size of the bitmap: %d\n", getSize(&myBitmap));

    return 0;
}