#include<stdio.h>

int main(){

    int row= 5 ,column=5,student =0,empty=0;
    char seating[5][5];
    printf("x = student, o = empty\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if((i+j)%2==0){
                seating[i][j]= 'x';
                student++;
            }else{
                seating[i][j]= 'o';
                empty++;
            } 
                
        }
    }

    for(int i=0;i<row;i++){
        printf("row %d ",i+1);
        for(int j=0;j<column;j++){
           printf("%c",seating[i][j]);
        }
        printf("\n");
    }

    printf("student seated: %d\n",student);
    printf("Empty desks: %d\n",empty);
    printf("total desks: %d",row*column);

    return 0;
}