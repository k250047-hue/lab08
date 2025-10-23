#include<stdio.h>>

int main(){
	//nested loop pyramid pattern
	int i,j;
	printf("pyramid pattern\n");
	
	for(i=1;i<6;i++){
		for(j=1;j<6;j++){              //printing * 5 times in each line 
			printf("*");               //if j<=i pyramid first line * pyramid last line *****
		}                              // if initial j=i ulta pyramid first***** last *
		printf("\n");
	}
	
	
	
	return 0;
}
