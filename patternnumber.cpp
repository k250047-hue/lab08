#include<stdio.h>
int main(){
	 
	 int i,j;
	 for(i=1;i<6;i++){
	 	for(j=1;j<=i;j++){
	 		printf("%d ",i);    //if print j result 1, 1 2,....,1 2 3 4 5
	 		                    //if print i result 1, 2 2, ....,5 5 5
		 }
		 printf(" \n");
	 }
	
	return 0;
}
