#include<stdio.h>

int main(){
	
	int matrix1[3][3]= {
               {12,45,32},
			   {2,13,45},
			   {56,72,41}	
	};
		int matrix2[3][3]= {
               {12,45,32},
			   {2,13,45},
			   {56,72,41}	
	};
	
	
	int i, j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",matrix1[i][j]+matrix2[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
