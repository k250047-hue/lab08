#include <stdio.h>

int main() {

    int image[4][4] = {
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 0, 1, 1}
    };

    int inverted[4][4];
    int Count = 0; 
   
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            inverted[i][j] = 1 - image[i][j]; 
            if (image[i][j] == 1)
                Count++;
        }
    }

   
    printf("Original Image\tInverted Image\n");
   
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", image[i][j]);
        }
        printf("\t");
        for (int j = 0; j < 4; j++) {
            printf("%d ", inverted[i][j]);
        }
        printf("\n");
    }

    printf("\n White pixels in the original image: %d\n",Count);

    return 0;
}
