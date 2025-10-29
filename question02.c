#include <stdio.h>

int main() {
    
    int photos[2][12] = {
        {14, 9, 2, 3, 6, 15, 20, 30, 25, 10, 2, 50},   
        {21, 15, 10, 7, 35, 20, 38, 30, 17, 8, 6, 12}    
    };

    for (int i = 0; i < 2; i++) { 
        printf("Year %d:\n", i+1);
        
        for (int j = 0; j < 12; j++) {  
            printf(" Year %d: Month %2d: %d photos\n",i+1, j+1, photos[i][j]);
        }
        
    }

    return 0;
}
