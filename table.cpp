#include<stdio.h>

int main(){
	
	int i,j;
	printf("multiplication table(1-5)\n");
	
	for(i=1;i<6;i++){
		printf("%d: ",i);
		
		for(j=1;j<=5;j++){
			printf("%d ",i*j);
		}
		printf("\n");
	}
	
	return 0;
}
