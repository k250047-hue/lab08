#include<stdio.h>

int main(){

 int sum, scores[3][4] = {{85,92,78,90},
                     {88,76,95,84},
                     {90,85,88,92}
                    };
float avg=0;
   for (int i = 0; i < 3; i++){
           sum=0;
        for (int j = 0; j < 4; j++){
           
                sum+= scores[i][j];
        }
          avg = sum/4.0;
   printf("\nAveage score for class %d is: %.2f",i + 1,avg);

   }
  
    return 0;
}