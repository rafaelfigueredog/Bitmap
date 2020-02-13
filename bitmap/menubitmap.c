#include <stdio.h>
#include "bitmap.h"

void begin() {

    int keep = 1, menu;
    uint8_t id;
    bitmapset bm; 
    init_bitmapset(&bm);

    while (keep) {
        
        printf("\n\t\tMenu Bitmap:\n\n"); 
        printf("1. vizual.\n"); 
        printf("2. set\n"); 
        printf("3. unset\n"); 
        printf("4. get\n"); 
        printf("5. size\n");
        printf("6. init/reset\n"); 
        printf("0. exit\n\n"); 

        printf("Type: "); 
        scanf("%d", &menu); 

        switch (menu) {

        case 1:
            binprintf(&bm); 
            break;

        case 2: 
            printf("id: "); scanf("%hhd", &id); 
            set(&bm, id); 
            break;

        case 3: 
            printf("id: "); scanf("%hhd", &id); 
            unset(&bm, id); 
            break;

        case 4:
            printf("id: "); scanf("%hhd", &id); 
            printf("%d", get(&bm, id)); 
            break;
        case 5:
            printf("Size: %hhd\n", size(&bm));   
            break;
        case 6:
            init_bitmapset(&bm);    
            break;
        case 0:
            printf("exiting...\n\n"); 
            keep = 0;    
            break;

        default:
            break;
        }
    }
    
}